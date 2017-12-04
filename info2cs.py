from swag2info import *
import uuid

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

def fix_case(str):
    components = str.split('-')
    return "".join(x[0].upper() + x[1:] for x in components)

def type2cs(type):
    if not type["type"] in builtins:
        return fix_case(type["type"])
    return info_type_convert(type, builtins)

def generate_enum(file, namespace, name,  enum):
    # definition
    file.write("using System.Runtime.Serialization;\n")
    file.write("namespace {0} {{\n".format(namespace))
    if enum["description"]:
        file.write("  // {0}\n".format(enum["description"]))
	file.write("  [DataContract]");
    file.write("  enum {0} {{\n".format(name))
    for value,  details in enum["values"].items():
        if details["description"]:
            file.write("    // {0}\n".format(details["description"]))
        file.write("    [DataMember(Name = \"{0}\")]\n".format(value))
        file.write("    {0} = {1},\n\n".format(fix_case(value),  details["value"]))
    file.write("  }\n")
    file.write("}")

def generate_struct(file, namespace,  name, struct):
    file.write("using System.Text;\n")
    file.write("using System.Runtime.Serialization;\n")
    file.write("using System.Collections.Generic;\n")

    file.write("namespace {0} {{\n".format(namespace))
    # definition
    if struct["description"]:
        file.write("  // {0}\n".format(struct["description"]))
	file.write("  [DataContract]");
    file.write("  struct {0} {{\n".format(name))
    for field, details in struct["fields"].items():
        if details["description"]: 
            file.write("    // {0}\n".format(details["description"]))
        file.write("    [DataMember(Name = \"{0}\")]\n".format(field))
        field_name = fix_case(field)
        if field_name == name:
            field_name = "_" + field_name
        file.write("    {0} {1} {{get; set;}}\n\n".format(type2cs(details["type"]), field_name))
    file.write((
        "    public override string ToString()\n"
        "    {\n"
        "      var sb = new StringBuilder();\n"
        "      sb.Append(\"class " + name + " {\\n\");\n"))
    for field, details in struct["fields"].items():
        field_name = fix_case(field)
        if field_name == name:
            field_name = "_" + field_name
        file.write("      sb.Append(\"  {0}: \").Append({0}).Append(\"\\n\");\n".format(field_name))
    file.write((
        "      sb.Append(\"}\\n\");\n"
        "      return sb.ToString();\n"
        "    }\n"));
    file.write("  }\n")
    file.write("}")

def generate_defintions(info,  folder,  namespace):
    for name,  definition in info["definitions"].items():
        name = fix_case(name)
        filename = folder + "/definitions/" + name + ".cs"
        mkpath(filename)
        file = open(filename,  "w+")
        # basic include and namespace
        if definition["isEnum"]:
            generate_enum(file,  namespace,  name, definition)
        else:
            generate_struct(file,  namespace,  name, definition)
            
    with open("info2cs.template.csproj", "rt") as fin:
        with open(folder + "/" + namespace + ".csproj", "wt") as fout:
            contents = fin.read()
            includes = "";
            for name, definition in info["definitions"].items():
                includes += "    <Compile Include=\"definitions\\{0}.cs\"/>\n".format(fix_case(name))
            contents = (contents.replace('PROJECT_GUID', str(uuid.uuid4()))
                                .replace('ROOT_NAMESPACE', namespace)
                                .replace('ASSEMBLY_NAME', namespace)
                                .replace('INCLUDES', includes))
            fout.write(contents)

# json_save( info_init(json_load("help.json"),  json_load("lol.json")),  "info.json")       
generate_defintions(json_load("info.json"),  "output/cs",  "leagueapi")