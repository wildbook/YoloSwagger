from swag2info import *
import time
import uuid
import re

template_enum = (
'using System.Runtime.Serialization;'     '\n'   
'namespace {namespace} {{'                '\n'            
'{enum_description}'
'    [DataContract]'                      '\n'
'    public enum {enum_name}'             '\n'
'    {{'                                  '\n'
'{fields}'
'    }}'                                  '\n'
'}}'                                      '\n'
)

template_enum_field = (
'{value_description}'
'    [DataMember(Name = "{value_name}")]'     '\n'
'    {value_cs_type} = {value_cs_name},'      '\n'
''                                            '\n'
)

template_struct = (
'using System.Text;'                                    '\n'
'using System.Runtime.Serialization;'                   '\n'
'using System.Collections.Generic;'                     '\n'
'namespace {namespace}.Definitions'                     '\n'
'{{'                                                    '\n'
'{struct_description}'
'    [DataContract]'                                    '\n'
'    public struct {struct_name}'                       '\n'
'    {{'                                                '\n'
'{field_items}'
'        public override string ToString()'             '\n'
'        {{'                                            '\n'
'            var sb = new StringBuilder();'             '\n'
'            sb.Append("class {struct_name} {{\\n");'   '\n'
'{string_builder_items}'
'            sb.Append("}}\\n");'                       '\n'
'            return sb.ToString();'                     '\n'
'        }}'                                            '\n'
'    }}'                                                '\n'
'}}'
)

template_struct_field = (
'{field_description}'
'        [DataMember(Name = \"{field_name}\")]'                      '\n'
'        public {field_cs_type} {field_cs_name} {{ get; set; }}'     '\n'
''                                                                   '\n'
)

template_request = (
'using Newtonsoft.Json;'                                                                                 '\n'
'using System.Collections.Generic;'                                                                      '\n'
'using System.Threading.Tasks;'                                                                          '\n'
'using {namespace}.Definitions;'                                                                         '\n'
'using {namespace};'                                                                                     '\n'
''                                                                                                       '\n'
'namespace {namespace}.Requests {{'                                                                      '\n'
'    public static partial class Request'                                                                '\n'
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
'}}'                                                                                                     '\n'
)

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
    fields = ''
    for value_name, details in enum["values"].items():
        fields += template_enum_field.format(value_description = "    // {}\n".format(details["description"]) if details["description"] else '',
                           value_name = value_name,
                           value_cs_type = fix_case(value_name),
                           value_cs_name = details["value"])

    file.write(template_enum.format(namespace = namespace,
              enum_description = "  // {}\n".format(enum["description"]) if enum["description"] else '',
              enum_name = name,
              fields = fields))

def generate_struct(file, namespace, name, struct):
    field_items = ''
    for field_name, details in struct["fields"].items():
        field_items += (template_struct_field.format(field_description = '        // {}\n'.format(details["description"]) if details["description"] else '',
                                                            field_name = field_name,
                                                         field_cs_type = type2cs_optional(details["type"]) if details["optional"] else type2cs(details["type"]),
                                                         field_cs_name = "_" + fix_case(field_name) if fix_case(field_name) == name else fix_case(field_name)))

    file.write(template_struct.format(namespace = namespace,
                             struct_description = '    // {}\n'.format(struct["description"]) if struct["description"] else '',
                                    struct_name = name,
                                    field_items = field_items,
                           string_builder_items = ''.join('            sb.Append("  {0}: ").Append({0}).Append("\\n");\n'.format("_" + fix_case(field_name) if fix_case(field_name) == name else fix_case(field_name)) for field_name, details in struct["fields"].items()) ))

def generate_requests(info, folder, namespace):
    for req_name, request in info["requests"].items():
        function = info["functions"][req_name]
        filename = folder + "/Requests/" + req_name + ".cs"
        mkpath(filename)
        file = open(filename, "w+")
        sorted_args = sorted(function["arguments"].items(), key=lambda x: (x[0] in function["optional"], x[0]))
        file.write(template_request.format(namespace = namespace,
                        return_value = "<{0}>".format(type2cs(function["returns"])) if function["returns"]["type"] else '',
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
            fout.write(fin.read().format(ROOT_NAMESPACE = namespace))

def generate_sln(folder, namespace, project_guid, solution_guid):
    with open("templates/cs/solution.sln", "rt") as fin:
        with open(folder + "/" + namespace + ".sln", "wt") as fout:
            fout.write(fin.read().format(ROOT_NAMESPACE = namespace,
                                           PROJECT_GUID = project_guid,
                                          SOLUTION_GUID = solution_guid))

def generate_utilities(folder, ns):
    with open("templates/cs/helpers.cs", "rt") as fin:
        with open(folder + "/Helpers.cs", "wt") as fout:
            fout.write(fin.read().format(NAMESPACE = ns))

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

output_namespace = "LeagueClientApi"

solution_dir = "output/cs"
solution_guid = str(uuid.uuid4())

project_dir = solution_dir + "/" + output_namespace
project_guid = str(uuid.uuid4())

dotnet_version = "4.7"
target_framework = "net47"

info_json = json_load("info.json")

print("Generating definitions...")
generate_defintions(info_json, project_dir, output_namespace)
print("Generating requests...")
generate_requests(info_json, project_dir, output_namespace)
print("Generating utilities...")
generate_utilities(project_dir, output_namespace)
print("Generating Visual Studio project...")
generate_csproj(project_dir, output_namespace, info_json, project_guid, dotnet_version)
print("Generating Visual Studio solution...")
generate_sln(solution_dir, output_namespace, project_guid, solution_guid)

print("Generating .bat files for compilation...")
with open(solution_dir + "/Build.bat", "wt") as fout:
    fout.write(('@echo off \n'
                'dotnet publish -c Release -r win10-x86 \n'
                'dotnet publish -c Release -r win10-x64 \n'
                'pause \n'))

print("Done!")
time.sleep(1)