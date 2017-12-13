from swag2yolo import *
template_include = '\n#include <lol/def/{0}.hpp>'
template_definition = """#pragma once
#include<lol/base_def.hpp> {INCLUDES}
namespace lol {{
  {ISENUM}struct {NAME} {{ {FIELDS} {VALUES}
  }};
  void to_json(json& j, const {NAME}& v) {{{ENUM_TO}{STRUCT_TO}
  }}
  void from_json(const json& j, {NAME}& v) {{{ENUM_FROM}{STRUCT_FROM}
  }}
}}"""
template_definition_fields = """
    {TYPE} {NAME};"""
template_definition_values = """
    {NAME} = {value},"""
template_enum_to = """
    if(v == {DNAME}::{NAME}) {{
      j = \"{name}\";
      return;
    }}"""
template_enum_from = """
    if(j.get<std::string>() == \"{name}\") {{
      v = {DNAME}::{NAME};
      return;
    }} """
template_struct_to = """
    j["{name}"] = v.{NAME}; """
template_struct_from = """
    v.{NAME} = j.at(\"{name}\").get<{TYPE}>(); """
template_struct_to_o = """
    if(v.{NAME})
      j["{name}"] = *v.{NAME};"""
template_struct_from_o = """
    if(auto it = j.find("{name}"); it != j.end() && !it->is_null())
      v.{NAME} = it->get<{TYPE}>(); """

template_op_arg_r = ', const {TYPE}& {NAME}'
template_op_arg_o = ', const {TYPE}& {NAME} = std::nullopt'
template_op_arg = '{{ "{name}", to_string({NAME}) }}'
template_op_empty = """#pragma once
#include<lol/base_op.hpp> {INCLUDES}
namespace lol {{
  Result<{RETURNS}> {NAME}(const LeagueClient& _client{ARGS_R}{ARGS_O})
  {{
    HttpsClient _client_(_client.host, false);
    return Result<{RETURNS}> {{
    _client_.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), "",
      Args2Headers({{ {{"Authorization", _client.auth}}, {ARGS_HEADER} }}) )
    }};
  }}
}}"""
template_op_form = """#pragma once
#include<lol/base_op.hpp> {INCLUDES}
namespace lol {{
  Result<{RETURNS}> {NAME}(const LeagueClient& _client{ARGS_R}{ARGS_O})
  {{
    HttpsClient _client_(_client.host, false);
    return Result<{RETURNS}> {{
    _client_.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), Args2String({{ {ARGS_FORM} }}),
      Args2Headers({{ {{"Authorization", _client.auth}}, {{"content-type", "application/x-www-form-urlencoded"}}, {ARGS_HEADER} }}) )
    }};
  }}
}}"""
template_op_json = """#pragma once
#include<lol/base_op.hpp> {INCLUDES}
namespace lol {{
  Result<{RETURNS}> {NAME}(const LeagueClient& _client{ARGS_R}{ARGS_O})
  {{
    HttpsClient _client_(_client.host, false);
    return Result<{RETURNS}> {{
    _client_.request("{method}", "{PATH}?" + SimpleWeb::QueryString::create(Args2Headers({{ {ARGS_QUERY} }})), json({ARGS_BODY}).dump(),
      Args2Headers({{ {{"Authorization", _client.auth}}, {{"content-type", "application/json"}}, {ARGS_HEADER} }}) )
    }};
  }}
}}"""

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
    "object": "json", 
    "string": "std::string", 
    "map": "std::map<std::string, {0}>", 
    "vector": "std::vector<{0}>" 
}
def type2cpp(parent):
    def _type2cpp(typ):
        otherformat = "{0}"
        if not typ["type"] in builtins:
            return otherformat.format(typ["type"]) 
        if not typ["elementType"] == "":
            if not typ["elementType"] in builtins:
                return builtins[typ["type"]].format(otherformat.format(typ["elementType"])) 
            return builtins[typ["type"]].format(builtins[typ["elementType"]].format(typ["elementType"]))
        return builtins[typ["type"]]
    if "elementType" in parent:
        return _type2cpp(parent).replace("-", "_")
    t = _type2cpp(parent["type"]).replace("-", "_")
    return "std::optional<{0}>".format(t) if "optional" in parent and parent["optional"] else t
def include2cpp(parent, ret = ""):
    def _in(typ):
        if not typ["elementType"] in builtins:
            return typ["elementType"]
        return typ["type"] if not typ["type"] in builtins else ""
    result = { _in(t["type"]) for t in parent if not _in(t["type"]) == "" }
    if not ret == "":
        extra = _in(ret)
        if not extra == "":
            result.update({extra})
    return result

def generate_def(yolo, folder):
    mkpath(folder+"/lol/def")
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["DNAME"] = definition["NAME"]
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["DNAME"] = definition["NAME"]
            value["NAME"] = value["name"].replace("-", "_") + "_e"
        open("{0}/lol/def/{1}.hpp".format(folder, definition["name"]), "w+").write(template_definition.format(**definition,
            INCLUDES = "".join([template_include.format(i) for i in include2cpp(definition["fields"])]),
            VALUES = "".join([template_definition_values.format(**m) for m in definition["values"]]),
            FIELDS = "".join([template_definition_fields.format(**m) for m in definition["fields"]]),
            ISENUM = "enum " if definition["isEnum"] else "",
            ENUM_TO = "".join([template_enum_to.format(**m) for m in definition["values"]]),
            ENUM_FROM = "".join([template_enum_from.format(**m) for m in definition["values"]]),
            STRUCT_TO = "".join([template_struct_to_o.format(**m) if m["optional"] else template_struct_to.format(**m) for m in definition["fields"]]),
            STRUCT_FROM = "".join([template_struct_from_o.format(**m) if m["optional"] else template_struct_from.format(**m) for m in definition["fields"]])))

def generate_op(yolo, folder):       
    mkpath(folder+"/lol/op")
    for op in yolo["functions"]:
        op["NAME"] = op["name"].replace("-", "_")
        op["RETURNS"] = type2cpp(op["returns"])
        for arg in op["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
        template = template_op_empty
        args_formdata = [template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "formData"]
        args_body = [arg["NAME"] for arg in op["arguments"] if arg["in"] == "body"]
        open("{0}/lol/op/{1}.hpp".format(folder, op["name"]), "w+").write(
            (template_op_form if len(args_formdata) > 0 else (template_op_json if len(args_body) >0 else template_op_empty))
            .format(**op,
            ARGS_R = "".join([template_op_arg_r.format(**arg) for arg in op["arguments"] if not arg["optional"]]),
            ARGS_O = "".join([template_op_arg_o.format(**arg) for arg in op["arguments"] if arg["optional"]]),
            ARGS_FORM = ",\n    ".join(args_formdata),       
            INCLUDES = "".join([template_include.format(i) for i in include2cpp(op["arguments"], op["returns"])]),
            ARGS_BODY = "".join(args_body),
            ARGS_HEADER = ",\n    ".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "header"]),
            ARGS_QUERY = ",\n    ".join([template_op_arg.format(**arg) for arg in op["arguments"] if arg["in"] == "query"]),
            PATH = op["url"].format(**{arg["name"] : '"+to_string({0})+"'.format(arg["NAME"]) for arg in op["arguments"] if arg["in"] == "path" })))

def generate_cpp(yolo, folder):   
    generate_def(yolo, folder)   
    generate_op(yolo, folder)

generate_cpp(json_load("yolo.json"), "../output/cpp")
