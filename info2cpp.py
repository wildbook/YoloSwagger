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
    return info_name_escape(info_type_convert(type, builtins,  "{0}_t"))

def generate_enum(file, namespace, name,  enum):
    file.write("#pragma once\n")
    file.write("#include <json.hpp>\n")
    # definition
    file.write("namespace {0} {{\n".format(namespace))
    if(len(enum["description"]) > 0):
        file.write("  // {0}\n".format(enum["description"]))
    file.write("  enum class {0}_t {{\n".format(info_name_escape(name)))
    for value,  details in enum["values"].items():
        if(len(details["description"]) > 0):
            file.write("    // {0}\n".format(details["description"]))
        file.write("    {0}_E = {1},\n".format(value,  details["value"]))
    file.write("  };\n\n")
    # to json
    file.write("  inline void to_json(nlohmann::json& j, const {0}_t& v) {{\n".format(info_name_escape(name)))
    file.write("    switch(v) {\n")
    for value in enum["values"]:
        file.write("      case {0}_t::{1}_E:\n".format(info_name_escape(name),  value))
        file.write("        j = \"{0}\";\n".format(value))
        file.write("      break;\n")
    file.write("    }\n")
    file.write("  }\n\n")
    # from json
    file.write("  inline void from_json(const nlohmann::json& j, {0}_t& v) {{\n".format(info_name_escape(name)))
    file.write("    const auto& s = j.get<std::string>();\n")
    for value in enum["values"]:
        file.write("    if(s == \"{0}\"){{\n".format(value))
        file.write("      v = {0}_t::{1}_E;\n".format(info_name_escape(name),  value))
        file.write("      return;\n")
        file.write("    }\n")
    file.write("  }\n")
    file.write("  inline std::string to_string(const {0}_t& v) {{\n".format(info_name_escape(name)))
    file.write("    switch(v) {\n")
    for value in enum["values"]:
        file.write("      case {0}_t::{1}_E:\n".format(info_name_escape(name),  value))
        file.write("        return \"{0}\";\n".format(value))
    file.write("    }\n")
    file.write("  }\n\n")

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
    file.write("  struct {0}_t {{\n".format(info_name_escape(name)))
    for field, details in struct["fields"].items():
        if(len(details["description"]) > 0):
            file.write("    // {0}\n".format(details["description"]))
        if(details["optional"]):
            file.write("    std::optional<{0}> {1};\n".format(type2cpp(details["type"]),  field))
        else:
            file.write("    {0} {1};\n".format(type2cpp(details["type"]),  field))
    file.write("  };\n\n")
    # to json
    file.write("  inline void to_json(nlohmann::json& j, const {0}_t& v) {{\n".format(info_name_escape(name)))
    for value, details in struct["fields"].items():
        if(details["optional"]):
                file.write("    if(v.{0})\n".format(value))
                file.write("      j[\"{0}\"] = *v.{0};\n".format(value))
        else:
            file.write("    j[\"{0}\"] = v.{0};\n".format(value))
    file.write("  }\n\n")
    # from json
    file.write("  inline void from_json(const nlohmann::json& j, {0}_t& v) {{\n".format(info_name_escape(name)))
    for value, details in struct["fields"].items():
        type = type2cpp(details["type"])
        if(details["optional"]):
            file.write("    if(auto it = j.find(\"{0}\"); it != j.end() && !it->is_null())\n".format(value))
            file.write("      v.{0} = it->get<{1}>();\n".format(value, type))
        else:
            file.write("    v.{0} = j.at(\"{0}\").get<{1}>();\n".format(value,  type))
    file.write("  }\n")
    file.write("  inline std::string to_string(const {0}_t& v) {{\n".format(info_name_escape(name)))
    file.write("    nlohmann::json j = v;\n")
    file.write("    return j.dump();")
    file.write("  }\n\n")
    file.write("}\n")

def generate_definitions(info,  folder,  namespace):
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

def generate_client(info,  folder,  namespace):
    file = open(folder + "/client.hpp",  "w+")
    file.write("#pragma once\n")
    file.write("#include <json.hpp>\n")
    file.write("#include <SimpleWeb/crypto.hpp>\n")
    file.write("#include <SimpleWeb/client_https.hpp>\n")
    file.write("#include <SimpleWeb/utility.hpp>\n")
    file.write("#include <stdexcept>\n")
    file.write("namespace {0} {{\n".format(namespace))
    file.write("  using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;\n")
    file.write("  using HttpsResponse = HttpsClient::Response;\n")
    file.write("  using HttpsResponsePtr = std::shared_ptr<HttpsClient::Response>;\n")
    file.write("  using Headers = SimpleWeb::CaseInsensitiveMultimap;\n")
    file.write("  using ErrorCode = SimpleWeb::error_code;\n")
    file.write("  using UrlCode = SimpleWeb::Percent;\n")
    file.write("  struct ClientInfo {\n")
    file.write("    std::string auth;\n")
    file.write("    std::string host;\n")
    file.write("  };\n\n")
    file.write("  struct OpError : public std::runtime_error {\n")
    file.write("    using std::runtime_error;\n")
    file.write("    using std::runtime_error::runtime_error;\n")
    file.write("  };\n\n")
    file.write("  inline std::string to_string(const nlohmann::json& v) {\n")
    file.write("    if(v.is_string()\n")
    file.write("      return v.get<std::string>()\n")
    file.write("    return v.dump();\n")
    file.write("  }\n")
    file.write("  inline const std::string& to_string(const std::string& v) {\n")
    file.write("    return v;\n")
    file.write("  }\n")
    file.write("}")
    
    
def generate_ops(info,  folder,  namespace):
    mkpath(folder + "/ops/")
    filenames = []
    for name,  op in info["functions"].items():
        if(name not in info["requests"]):
            continue
        filename =  "ops/" + name + ".hpp"
        filenames.append(filename)
        request = info["requests"][name]
        file = open(folder + "/"+ filename,  "w+")
        file.write("#pragma once\n")
        file.write("#include \"../client.hpp\"\n")
        for i in info_function_imports(op):
            if not i in builtins:
                file.write("#include \"{0}.hpp\"\n".format(i))
        file.write("namespace {0} {{\n".format(namespace))
        returns = ""
        if op["returns"]["type"] == "":
            returns = "void"
        else:
           returns =  type2cpp(op["returns"])
        desc = op["description"]
        if not desc == "":
            file.write("  //{0}\n".format(desc))
        file.write("  {0} {1} (const ClientInfo& info".format(returns,  name))
        for required in op["required"]:
            r = op["arguments"][required]
            desc = r["description"]
            file.write(",")
            if not desc == "":
                file.write("\n    //{0}".format(desc))
            file.write("\n    const {1}& {0}".format(required,  type2cpp(r["type"])))
        for optional in op["optional"]:
            o = op["arguments"][optional]
            type = o["type"]
            desc = o["description"]
            file.write(",")
            if not desc == "":
                file.write("\n    //{0}".format(desc))
            if type["type"] == "object":
                file.write("\n    const {1}& {0} = nullptr".format(optional,  type2cpp(type)))
            else:
                file.write("\n    const std::optional<{1}>& {0} = std::nullopt".format(optional,  type2cpp(type)))
        file.write(")\n  {\n")
        file.write("    using std::to_string;\n")
        file.write("    using {0}::to_string;\n".format(namespace))
        file.write("    Headers headers = {{\"Authorization\", info.auth}};\n")
        for aname in request["header"]:
            if aname in op["optional"]:
                file.write("    if({0})\n".format(aname))
                file.write("      headers[\"{0}\"] = UrlCode::encode(to_string(*{0}));\n".format(aname))
            else:
                file.write("    headers[\"{0}\"] = UrlCode::encode(to_string({0}));\n".format(aname))
        if len(request["body"]) == 1:
            aname = request["body"][0]
            file.write("    headers[\"content-type\"] = \"application/json\";\n")
            file.write("    const std::string body = json({0}).dump();\n".format(aname))
        elif len(request["formData"]) == 1:
            aname = request["formData"][0]
            file.write("    headers[\"content-type\"] = \"application/x-www-form-urlencoded\";\n")
            file.write("    const std::string body = body = UrlCode::encode(to_string({0}));\n".format(aname))
        else:
            file.write("    const std::string body =\"\";\n")
        path = "{0}".format(request["url"])
        if len(request["path"]) > 0:
            path = path.replace("{",  "\"+UrlCode::encode(to_string(").replace("}","))+\"")
        file.write("    std::string path = \"{0}\";\n".format(path))
        if len(request["query"]) > 0:
            file.write("    Headers query;\n")
            for aname in request["query"]:
                if aname in op["optional"]:
                    if op["arguments"][aname]["type"]["type"] == "object":
                        file.write("    if(!{0}.is_null())\n".format(aname))
                        file.write("      query[\"{0}\"] = {0};\n".format(aname))
                    else:
                        file.write("    if({0})\n")
                        file.write("      query[\"{0}\"] = *{0};\n".format(aname))
                else:
                    file.write("      query[\"{0}\"] = {0};\n".format(aname))
            file.write("    if(query.size() > 0)\n")
            file.write("      path.append(\"?\" + SimpleWeb::QueryString::create(query));\n")
        file.write("    HttpsClient client(info.host, false);\n")
        file.write("    auto res = client.request(\"{0}\", path, body, headers);\n".format(request["method"]))
        file.write("    if(res->status_code == 406)\n")
        file.write("      throw OpError(res->content.string());\n")
        if returns == "void":
            file.write("    return;\n")
        elif returns == "nlohmann::json":
            file.write("    if(auto it = res->header.find(\"content-type\"); it !=res->header.end() && it->second == \"application/json\")\n")
            file.write("      return nlohmann::json(res->content.string());\n")
            file.write("    return res->content.string();\n")
        else:
            file.write("    return nlohmann::json(res->content.string());\n")
        file.write("  }\n")
        #end namespace
        file.write("}\n")
    file = open(folder + "/ops.hpp",  "w+")
    file.write("#pragma once\n")
    file.write("#include \"client.hpp\"\n")
    for filename in filenames:
        file.write("#include \"{0}\"\n".format(filename))
    file.close()


def generate_all(info,  folder,  namespace):
    generate_client(info,  folder,  namespace)
    generate_ops(info,  folder,  namespace)
    generate_definitions(info,  folder,  namespace)

#json_save( info_init(json_load("help.json"),  json_load("lol.json")),  "info.json")       
i = json_load("info.json")
generate_all(i,  "output/cpp",  "leagueapi")
