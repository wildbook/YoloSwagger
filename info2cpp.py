from swag2info import *

builtins = {
    "bool": "bool", 
    "int8": "int8_t", 
    "uint8": "uint8_t",
    "int16": "int16_t", 
    "uint16": "uint16_t",
    "int32": "int32_t", 
    "uint32": "uint32_t",
    "int64": "int64_t", 
    "uint64": "uint64_t", 
    "float": "float", 
    "double": "double", 
    "object": "nlohmann::json", 
    "string": "std::string", 
    "map": "std::map<std::string, {0}>", 
    "vector": "std::vector<{0}>" 
}

def type2cpp(type):
    return info_type_convert(type, builtins)

def generate_enum(file, namespace, name,  enum):
    # definition
    file.write("namespace {0} {{\n".format(namespace))
    file.write("  // {0}\n".format(enum["description"]))
    file.write("  enum class {0} {{\n".format(name))
    for value,  details in enum["values"].items():
        file.write("    // {0}\n".format(details["description"]))
        file.write("    {0} = {1},\n".format(value,  details["value"]))
    file.write("  };\n\n")
    # to json
    file.write("  void to_json(nlohmann::json& j, const {0}& v) {{\n".format(name))
    file.write("    switch(v) {\n")
    for value in enum["values"]:
        file.write("      case {0}::{1}:\n".format(name,  value))
        file.write("        j = \"{0}\";\n".format(value))
        file.write("      break;\n")
    file.write("    }\n")
    file.write("  }\n\n")
    # from json
    file.write("  void from_json(const nlohmann::json& j, {0}& v) {{\n".format(name))
    file.write("    const auto s& = j.get<std::string>();\n")
    for value in enum["values"]:
        file.write("    if(s == \"{0}\"){{\n".format(value))
        file.write("      v = {0}::{1};\n".format(name,  value))
        file.write("      return;\n")
        file.write("    }\n")
    file.write("  }\n\n")
    file.write("}\n")
        
def generate_struct(file, namespace,  name, struct):
    for i in info_struct_imports(struct):
        if not i in builtins:
            file.write("#include \"{0}.hpp\"\n".format(i))
    file.write("namespace {0} {{\n".format(namespace))
    # definition
    file.write("  // {0}\n".format(struct["description"]))
    file.write("  struct {0} {{\n".format(name))
    for field, details in struct["fields"].items():
        file.write("    // {0}\n".format(details["description"]))
        file.write("    {0} {1};\n".format(type2cpp(details["type"]),  field))
    file.write("  };\n\n")
    # to json
    file.write("  void to_json(nlohmann::json& j, const {0}& v) {{\n".format(name))
    for fields in struct["fields"]:
        file.write("    j[\"{0}\"] = v.{0};\n".format(fields))
    file.write("  }\n\n")
    # from json
    file.write("  void from_json(const nlohmann::json& j, {0}& v) {{\n".format(name))
    for value, details in struct["fields"].items():
        file.write("    v.{0} = j.at(\"{0}\").get<{1}>;\n".format(value,  type2cpp(details["type"])))
    file.write("  }\n\n")
    file.write("}\n")


def generate_defintions(info,  folder,  namespace):
    for name,  definition in info["definitions"].items():
        filename = folder + "/definitions/" + name + ".hpp"
        mkpath(filename)
        file = open(filename,  "w+")
        # c++ include guards
        file.write("#ifndef SWAGGER_TYPES_{0}_HPP\n".format(name))
        file.write("#define SWAGGER_TYPES_{0}_HPP\n".format(name))
        file.write("#include <json.hpp>\n")
        # basic include and namespace
        if definition["isEnum"]:
            generate_enum(file,  namespace,  name, definition)
        else:
            generate_struct(file,  namespace,  name, definition)
        # end namespace and end c++ include gurads
        file.write("#endif // SWAGGER_TYPES_{0}_HPP\n".format(name))

# json_save( info_init(json_load("help.json"),  json_load("lol.json")),  "info.json")       
generate_defintions(json_load("info.json"),  "output",  "leagueapi")
