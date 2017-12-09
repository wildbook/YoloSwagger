from swag2yolo import *

#base.hpp includes json and optional support
template_base_hpp = """#pragma once
#include <json.hpp>
#include <optional>
namespace nlohmann {{
  template <typename T>
  struct adl_serializer<std::optional<T>> {{
    static void to_json(json& j, const std::optional<T>& opt) {{
      j = opt ? *j : nullptr;
    }}
    static void from_json(const json& j, std::optional<T>& opt) {{
      opt = j.is_null() ? std::nullopt : j.get<T>();
    }}
  }};
}}
namespace {NAMESPACE} {{
using json = nlohmann::json;
}}"""

#struct definitions
template_struct = """#pragma once
#include "../base.hpp"
{INCLUDES}
namespace {NAMESPACE} {{
struct {NAME} {{ /*{description}*/ {MEMBERS}
}};
void to_json(json& j, const {NAME}& v) {{ {TO_JSON}
}}
void from_json(const json& j, {NAME}& v) {{ {FROM_JSON}
}}
}}"""
template_struct_members = """
  {TYPE} {NAME};/*{description}*/"""
template_struct_to_json = """
  j[\"{NAME}\"] = v.{NAME};"""
template_struct_from_json = """
  v.{NAME} = j.at(\"{NAME}\").get<{TYPE}>();"""
template_struct_include = """
#include "{0}.hpp" """

#enum definitions
template_enum = """#pragma once
#include "../base.hpp"
namespace {NAMESPACE} {{
enum class {NAME} {{ /*{description}*/ {VALUES}
}};
std::string to_string(const {NAME}& v) {{
  switch(v) {{ {TO_STRING}
  }};
}}
void to_json(json& j, const {NAME}& v) {{
  j = as_string(v);
}}
void from_json(const json& j, {NAME}& v) {{
  auto s = j.get<std::string>(); {FROM_JSON}
}}
}}"""
template_enum_values = """
  {NAME} = {value}, /*{description}*/ """
template_enum_to_string = """
  case {ENUM}::{NAME}:
    return \"{name}\";
  break;"""
template_enum_from_json = """
  if(s == \"{name}\") {{
    v = {ENUM}::{NAME};
    return;
  }}"""

#builtin types
builtins = {
    "": "void",
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

#gets type as incldue type :)
def type2include(type):
    if "returns" in type:
        return type2include(type["returns"])
    if "elementType" not in type:
        return type2include(type["type"])
    if type["type"] == "vector":
        return type["elementType"]
    if type["type"] == "map":
        return type["elementType"]
    return type["type"]
#formats all include types if they are not builtins and empty
def includes2fmt(includes, fmt, additional = ""):
    includes.update({additional})
    return "".join([fmt.format(i) for i in includes if ((i not in builtins) and (not i == ""))])
#converts type or type holder to type :)
def type2cpp(parent):
    def _type2cpp(type):
        otherformat = "{0}_t"
        if not type["type"] in builtins:
            return otherformat.format(type["type"])
        if not type["elementType"] == "":
            if not type["elementType"] in builtins:
                return builtins[type["type"]].format(otherformat.format(type["elementType"]))
            return builtins[type["type"]].format(builtins[type["elementType"]].format(type["elementType"]))
        return builtins[type["type"]]
    if "elementType" in parent:
        return _type2cpp(parent).replace("-", "_")
    t = _type2cpp(parent["type"]).replace("-", "_")
    if "optional" in parent and parent["optional"]:
        return "std::optional<{0}>".format(t)
    return t

def fix2cpp(yolo):
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}_t".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["NAME"] = "{}_e".format(value["name"].replace("-", "_"))
    for function in yolo["functions"]:
        function["NAME"] = function["name"].replace("-", "_")
        function["RETURNS"] = "Result<{0}>".format(type2cpp(function["returns"]))
        for arg in function["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
    for event in yolo["events"]:
        event["NAME"] = event["name"].replace("-", "_")
        event["TYPE"] = type2cpp(event)

def generate_base(yolo, folder, namespace):
    open(folder + "/base.hpp").write(template_base_hpp)

def generate_definitions(yolo, folder, namespace):
    mkpath("{0}/definitions/".format(folder))
    filenames = []
    for definition in yolo["definitions"]:
        filename = "definitions/{0}.hpp".format(definition["name"])
        file = open("{0}/{1}".format(folder, filename), "w+")
        if definition["isEnum"]:
            file.write(template_enum.format(
                **definition,
                NAMESPACE = namespace,
                VALUES = "".join([template_enum_values.format(**m) for m in definition["values"]]),
                TO_STRING = "".join([template_enum_to_string.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
                FROM_JSON = "".join([template_enum_from_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
            ))
        else:
            file.write(template_struct.format(
                **definition,
                NAMESPACE = namespace,
                INCLUDES = includes2fmt({type2include(i) for i in definition["fields"]}, template_struct_include),
                MEMBERS = "".join([template_struct_members.format(**m) for m in definition["fields"]]),
                TO_JSON = "".join([template_struct_to_json.format(**m) for m in definition["fields"]]),
                FROM_JSON = "".join([template_struct_from_json.format(**m) for m in definition["fields"]]),
            ))            
        file.close()

#y = json_load("yolo.json")
#fix2cpp(y)
#json_save(y, "cpp.json")
#json.cpp is caches here for development purposes :)
y = json_load("cpp.json")
generate_definitions(y, "output/cpp", "leagueapi")
