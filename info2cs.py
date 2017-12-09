from swag2info import *
import time
import uuid
import re

builtins = {
    "bool": "bool", 
    "int8": "sbyte", 
    "uint8": "byte",
    "int16": "short", 
    "uint16": "ushort",
    "int32": "int", 
    "uint32": "uint",
    "int64": "long",
    "uint64": "ulong",
    "float": "float",
    "double": "double",
    "object": "dynamic",
    "string": "string",
    "map": "Dictionary<string, {0}>", 
    "vector": "{0}[]" 
}

builtins_optional = {
    "bool": "bool?", 
    "int8": "sbyte?", 
    "uint8": "byte?",
    "int16": "short?", 
    "uint16": "ushort?",
    "int32": "int?", 
    "uint32": "uint?",
    "int64": "long?", 
    "uint64": "ulong?", 
    "float": "float?", 
    "double": "double?", 
    "object": "dynamic",
    "string": "string", 
    "map": "Dictionary<string, {0}>", 
    "vector": "{0}[]"
}

def fix_case(str, firstUpper = True):
    components = str.split('-')

    output = re.sub(r'(?!^)-([a-zA-Z])', lambda m: m.group(1).upper(), str)
    if firstUpper:
        return ''.join(output[0].upper() + output[1:])
    return output

def type2cs(type):
    if not type["type"] in builtins:
        return fix_case(type["type"])
    if (len(type["elementType"]) > 0 and not type["elementType"] in builtins):
        type["elementType"] = fix_case(type["elementType"])
    return info_type_convert(type, builtins)
    
def type2cs_optional(type):
    if not type["type"] in builtins:
        return fix_case(type["type"]) + "?"
    if (len(type["elementType"]) > 0 and not type["elementType"] in builtins):
        type["elementType"] = fix_case(type["elementType"])
    return info_type_convert(type, builtins_optional)

# TODO: Use templates instead
def generate_enum(file, namespace, name, enum):
    file.write("using System.Runtime.Serialization;\n")
    file.write("namespace {0} {{\n".format(namespace))
    if enum["description"]:
        file.write("  // {0}\n".format(enum["description"]))
    file.write("  [DataContract]")
    file.write("  public enum {0} {{\n".format(name))
    for value,  details in enum["values"].items():
        if details["description"]:
            file.write("    // {0}\n".format(details["description"]))
        file.write("    [DataMember(Name = \"{0}\")]\n".format(value))
        file.write("    {0} = {1},\n\n".format(fix_case(value),  details["value"]))
    file.write("  }\n")
    file.write("}")

# TODO: Use templates instead
def generate_struct(file, namespace, name, struct):
    file.write("using System.Text;\n")
    file.write("using System.Runtime.Serialization;\n")
    file.write("using System.Collections.Generic;\n")

    file.write("namespace {0}.Definitions\n{{\n".format(namespace))
    if struct["description"]:
        file.write("    // {0}\n".format(struct["description"]))
    file.write("    [DataContract]\n")
    file.write("    public struct {0}\n    {{\n".format(name))
    for field, details in struct["fields"].items():
        if details["description"]: 
            file.write("        // {0}\n".format(details["description"]))
        file.write("        [DataMember(Name = \"{0}\")]\n".format(field))
        field_name = fix_case(field)
        if field_name == name:
            field_name = "_" + field_name
        if details["optional"]:
            file.write("        public {0} {1} {{ get; set; }}\n\n".format(type2cs_optional(details["type"]), field_name))
        else:
            file.write("        public {0} {1} {{ get; set; }}\n\n".format(type2cs(details["type"]), field_name))
    file.write(("        public override string ToString()\n"
        "        {\n"
        "            var sb = new StringBuilder();\n"
        "            sb.Append(\"class " + name + " {\\n\");\n"))
    for field, details in struct["fields"].items():
        field_name = fix_case(field)
        if field_name == name:
            field_name = "_" + field_name
        file.write("            sb.Append(\"  {0}: \").Append({0}).Append(\"\\n\");\n".format(field_name))
    file.write(("            sb.Append(\"}\\n\");\n"
        "            return sb.ToString();\n"
        "        }\n"))
    file.write("    }\n")
    file.write("}")

def generate_requests(info, folder, namespace):
    for req_name, request in info["requests"].items():
        function = info["functions"][req_name]
        filename = folder + "/Requests/" + req_name + ".cs"
        mkpath(filename)
        file = open(filename, "w+")
        sorted_args = sorted(function["arguments"].items(), key=lambda x: (x[0] in function["optional"], x[0]))
        file.write(('using Newtonsoft.Json;'                                                                                 '\n'
                    'using System.Collections.Generic;'                                                                      '\n'
                    'using System.Threading.Tasks;'                                                                          '\n'
                    'using {namespace}.Definitions;'                                                                         '\n'
                    'using {namespace};'                                                                                     '\n'
                                                                                                                             '\n'
                    'namespace {namespace} {{'                                                                               '\n'
                    '    public static partial class Requests'                                                               '\n'
                    '    {{'                                                                                                 '\n'
                    '        public static Task{return_value} {request_name}(LeagueClientSession session{arguments}) =>'     '\n'
                    '            session.SendRequestAsync{return_value}('                                                    '\n'
                    '                              method: "{http_method}",'                                                 '\n'
                    '                            endpoint: $"{http_endpoint}",'                                              '\n'
                    '                               query: {http_query},'                                                    '\n'
                    '                             headers: {http_headers},'                                                  '\n'
                    '                                body: {http_body},'                                                     '\n'
                    '                       serializeBody: {serialize_body});'                                               '\n'
                    '    }}'                                                                                                 '\n'
                    '}}'                                                                                                     '\n')
                   .format(    namespace = namespace,
                            return_value = "<{0}>".format(type2cs(function["returns"])) if function["returns"]["type"] else "",
                            request_name = req_name,
                               arguments = ''.join(", {0} {1}".format(type2cs_optional(argument["type"]) if arg_name in function["optional"] else type2cs(argument["type"]), "_" + fix_case(arg_name, False) + (" = null" if arg_name in function["optional"] else "")) for arg_name, argument in sorted_args),
                             http_method = request["method"].upper(),
                           http_endpoint = re.sub(r'{[^{]*-([a-zA-Z])[^}]*}', lambda m: fix_case(m.group(0), False), request["url"]).replace("{", "{_"),
                              http_query = 'new Dictionary<string, string>{{{0}}}'.format(''.join('{{"{0}", JsonConvert.SerializeObject({1})}}, '.format(query_name, "_" + fix_case(query_name, False)) for query_name in request["query"])) if request["query"] else "null",
                            http_headers = 'new Dictionary<string, string>{{{0}}}'.format(''.join('{{"{0}", JsonConvert.SerializeObject({1})}}, '.format(header_name, "_" + fix_case(header_name, False)) for header_name in request["header"])) if request["header"] else "null",
                               http_body = "_" + fix_case(request["body"][0], False) if request["body"] else "null",
                          serialize_body = "true"))

def generate_csproj(folder, namespace, info, guid, dotnet):
    with open("templates/cs/project.csproj", "rt") as fin:
        with open(folder + "/" + namespace + ".csproj", "wt") as fout:
            includes = "    <Compile Include=\"Helpers.cs\"/>\n"
            includes += ''.join("    <Compile Include=\"Definitions\\{0}.cs\"/>\n".format(fix_case(name)) for name, definition in info["definitions"].items())
            includes += ''.join("    <Compile Include=\"Requests\\{0}.cs\"/>\n"   .format(fix_case(name)) for name, request    in info["requests"]   .items())
            fout.write(fin.read().format(PROJECT_GUID = guid,
                                         ROOT_NAMESPACE = namespace,
                                         ASSEMBLY_NAME = namespace,
                                         INCLUDES = includes,
                                         TARGET_DOTNET = dotnet))

def generate_sln(folder, namespace, project_guid, solution_guid):
    with open("templates/cs/solution.sln", "rt") as fin:
        with open(folder + "/" + namespace + ".sln", "wt") as fout:
            fout.write(fin.read().format(PROJECT_GUID = project_guid,
                                         ROOT_NAMESPACE = namespace,
                                         SOLUTION_GUID = solution_guid))

def generate_utilities(folder, ns):
    with open("templates/cs/helpers.cs", "rt") as fin:
        with open(folder + "/Helpers.cs", "wt") as fout:
            fout.write(fin.read().format(NAMESPACE = ns))

def generate_packages(folder, target_framework):
    with open("templates/cs/packages.config", "rt") as fin:
        with open(folder + "/packages.config", "wt") as fout:
            fout.write(fin.read().format(TARGET_FRAMEWORK = target_framework))

def generate_defintions(info, folder, namespace):
    for name, definition in info["definitions"].items():
        name = fix_case(name)
        filename = folder + "/Definitions/" + name + ".cs"
        mkpath(filename)
        file = open(filename,  "w+")
        # basic include and namespace
        if definition["isEnum"]:
            generate_enum(file, namespace, name, definition)
        else:
            generate_struct(file, namespace, name, definition)

info_json = json_load("info.json")
output_dir = "output/cs"
output_namespace = "LeagueClientApi"

project_guid = str(uuid.uuid4())
solution_guid = str(uuid.uuid4())

dotnet_version = "4.7"
target_framework = "net47"

print("Generating definitions...")
generate_defintions(info_json, output_dir, output_namespace)
print("Generating requests...")
generate_requests(info_json, output_dir, output_namespace)
print("Generating utilities...")
generate_utilities(output_dir, output_namespace)
print("Generating Visual Studio project...")
generate_csproj(output_dir, output_namespace, info_json, project_guid, dotnet_version)
print("Generating Visual Studio solution...")
generate_sln(output_dir, output_namespace, project_guid, solution_guid)
print("Generating nuget packages file...")
generate_packages(output_dir, target_framework)
print("Done!")
time.sleep(1)