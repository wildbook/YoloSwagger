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
    return info_type_convert(type, builtins,  "{0}_t")

def generate_enum(file, namespace, name,  enum):
    file.write("#pragma once\n")
    file.write("#include <json.hpp>\n")
    # definition
    file.write("namespace {0} {{\n".format(namespace))
    if(len(enum["description"]) > 0):
        file.write("  // {0}\n".format(enum["description"]))
    file.write("  enum class {0}_t {{\n".format(name))
    for value,  details in enum["values"].items():
        if(len(details["description"]) > 0):
            file.write("    // {0}\n".format(details["description"]))
        file.write("    {0}_E = {1},\n".format(value,  details["value"]))
    file.write("  };\n\n")
    # to json
    file.write("  inline void to_json(nlohmann::json& j, const {0}_t& v) {{\n".format(name))
    file.write("    switch(v) {\n")
    for value in enum["values"]:
        file.write("      case {0}_t::{1}_E:\n".format(name,  value))
        file.write("        j = \"{0}\";\n".format(value))
        file.write("      break;\n")
    file.write("    }\n")
    file.write("  }\n\n")
    # from json
    file.write("  inline void from_json(const nlohmann::json& j, {0}_t& v) {{\n".format(name))
    file.write("    const auto& s = j.get<std::string>();\n")
    for value in enum["values"]:
        file.write("    if(s == \"{0}\"){{\n".format(value))
        file.write("      v = {0}_t::{1}_E;\n".format(name,  value))
        file.write("      return;\n")
        file.write("    }\n")
    file.write("  }\n")
    file.write("}\n")
        
def generate_struct(file, namespace,  name, struct):
    # c++ include guards
    file.write("#pragma once\n")
    file.write("#include <json.hpp>\n")
    file.write("#include <optional>\n")
    for i in info_struct_imports(struct):
        if not i in builtins:
            file.write("#include \"{0}.hpp\"\n".format(i))
    file.write("namespace {0} {{\n".format(namespace))
    # definition
    if(len(struct["description"])):
        file.write("  // {0}\n".format(struct["description"]))
    file.write("  struct {0}_t {{\n".format(name))
    for field, details in struct["fields"].items():
        if(len(details["description"]) > 0):
            file.write("    // {0}\n".format(details["description"]))
        if(details["optional"]):
            file.write("    std::optional<{0}> {1};\n".format(type2cpp(details["type"]),  field))
        else:
            file.write("    {0} {1};\n".format(type2cpp(details["type"]),  field))
    file.write("  };\n\n")
    # to json
    file.write("  inline void to_json(nlohmann::json& j, const {0}_t& v) {{\n".format(name))
    for value, details in struct["fields"].items():
        if(details["optional"]):
                file.write("    if(v.{0})\n".format(value))
                file.write("      j[\"{0}\"] = *v.{0};\n".format(value))
        else:
            file.write("    j[\"{0}\"] = v.{0};\n".format(value))
    file.write("  }\n\n")
    # from json
    file.write("  inline void from_json(const nlohmann::json& j, {0}_t& v) {{\n".format(name))
    for value, details in struct["fields"].items():
        type = type2cpp(details["type"])
        if(details["optional"]):
            file.write("    if(auto it = j.find(\"{0}\"); it != j.end() && !it->is_null())\n".format(value))
            file.write("      v.{0} = it->get<{1}>();\n".format(value, type))
        else:
            file.write("    v.{0} = j.at(\"{0}\").get<{1}>();\n".format(value,  type))
    file.write("  }\n")
    file.write("}\n")

def generate_defintions(info,  folder,  namespace):
    mkpath(folder + "/definitions/")
    filenames = []
    for name,  definition in info["definitions"].items():
        filename =  "definitions/" + name + ".hpp"
        filenames.append(filename)
        file = open(folder + "/"+ filename,  "w+")
        # basic include and namespace
        if definition["isEnum"]:
            generate_enum(file,  namespace,  name, definition)
        else:
            generate_struct(file,  namespace,  name, definition)
    file = open(folder + "/definitions.hpp",  "w+")
    file.write("#pragma once\n")   
    file.write("#include <json.hpp>\n")
    for filename in filenames:
        file.write("#include \"{0}\"\n".format(filename))
    file.close()

def generat_client(info,  folder,  namespace):
    file = open(folder + "/client.hpp",  "w+")
    file.write("#pragma once\n")
    file.write("#include <json.hpp>\n")
    file.write("#include <SimpleWeb/crypto.hpp>\n")
    file.write("#include <SimpleWeb/client_https.hpp>\n")
    file.write("namespace {0} {{\n".format(namespace))
    file.write("  using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;")
    file.write("  using HttpsResponse = shared_ptr<HttpsClient::Response>;")
    file.write("  using error_code = SimpleWeb::error_code;")
    file.write("  template<typename T>\n")
    file.write("  struct Result {\n")
    file.write("    HttpsResponse response;\n")
    file.write("    inline operator T() const {\n")
    file.write("      return nlohmann::json::parse(response->string());\n")
    file.write("    }\n")
    file.write("    inline T result() const {\n")
    file.write("      return nlohmann::json::parse(response->string());\n")
    file.write("    }\n")
    file.write("  }\n")
    file.write("  template<>\n")
    file.write("  struct Result<void> {\n")
    file.write("     HttpsResponse response;\n")
    file.write("  }\n")
    file.write("}")
    
def generate_ops(info,  folder,  namespace):
    mkpath(folder + "/ops/")
    filenames = []
    for name,  op in info["functions"].items():
        filename =  "ops/" + name + ".hpp"
        filenames.append(filename)
        request = info["requests"][name]
        file = open(folder + "/"+ filename,  "w+")
        file.write("#pragma once\n")
        file.write("#include <json.hpp>\n")
        file.write("#incldue \"../client.hpp\"\n")
        for i in info_struct_imports(struct):
            if not i in builtins:
                file.write("#include \"{0}.hpp\"\n".format(i))
        file.write("namespace {0} {{\n".format(namespace))
        returns = ""
        if op["returns"]["type"] == "":
            returns = "void"
        else:
           returns =  type2cpp(op["returns"])
        file.write("  Result<{0}> {1} (HttpsClient client".format(returns,  name))
        for required in op["required"]:
            file.write(", const {0}& {1}".format(optional,  type2cpp(op["arguments"][required]["type"])))
        for optional in op["optional"]:
            type = op["arguments"][optional]["type"]
            if type["type"] == "object":
                file.write(", const {0}& {1} = {{}}".format(optional,  type2cpp(type)))
            else:
                file.write(", const std::optional<{0}>& {1} = {{}}".format(optional,  type2cpp(type)))
        file.write(") {{\n")
        
        file.write("  }\n")
        #end namespace
        file.write("}\n")
        
    

#json_save( info_init(json_load("help.json"),  json_load("lol.json")),  "info.json")       
i = json_load("info.json")
for name,  req in i["requests"].items():
    if len(req["formData"]) == 1:
        argname = req["formData"][0]
        f = i["functions"][name]
        returns = f["returns"]
        if not returns["type"] in builtins:
            print(name,  returns)
#generate_defintions(json_load("info.json"),  "output/cpp",  "leagueapi")
