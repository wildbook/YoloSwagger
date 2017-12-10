from swag2yolo import *

#base.hpp includes json and optional support
template_base_hpp = """#pragma once
#include <json.hpp>
#include <optional>
namespace nlohmann {{
  template <typename T>
  struct adl_serializer<std::optional<T>> {{
    static void to_json(json& j, const std::optional<T>& opt) {{
      if(opt)
        j = *opt;
      else
        j = nullptr;
    }}
    static void from_json(const json& j, std::optional<T>& opt) {{
      if(j.is_null())
        opt.reset();
      else
        opt = j.get<T>();
    }}
  }};
}}
namespace {NAMESPACE} {{
  using json = nlohmann::json;
  using std::to_string;
  inline std::string to_string(const std::string& v) {{
    return v;
  }}
  inline std::string to_string(const json& j) {{
    if(j.is_string())
      return j.get<std::string>();
    return j.dump();
  }}
}} """

#struct definitions
template_struct = """#pragma once
#include "../base.hpp"
{INCLUDES}
namespace {NAMESPACE} {{
  struct {NAME} {{ /*{description}*/ {MEMBERS}
  }};
  static void to_json(json& j, const {NAME}& v) {{ {TO_JSON}
  }}
  static void from_json(const json& j, {NAME}& v) {{ {FROM_JSON}
  }}
}} """
template_struct_members = """
    {TYPE} {NAME};/*{description}*/"""
template_struct_to_json = """
    j[\"{NAME}\"] = v.{NAME};"""
template_struct_from_json = """
    v.{NAME} = j.at(\"{NAME}\").get<{TYPE}>(); """

#enum definitions
template_enum = """#pragma once
#include "../base.hpp"
namespace {NAMESPACE} {{
  enum class {NAME} {{ /*{description}*/ {VALUES}
  }};
  static void to_json(json& j, const {NAME}& v) {{
    switch(v) {{ {TO_JSON}
    }};
  }}
  static void from_json(const json& j, {NAME}& v) {{
    auto s = j.get<std::string>(); {FROM_JSON}
  }}
}} """
template_enum_values = """
    {NAME} = {value}, /*{description}*/ """
template_enum_to_json = """
    case {ENUM}::{NAME}:
      j = \"{name}\";
    break;"""
template_enum_from_json = """
    if(s == \"{name}\") {{
      v = {ENUM}::{NAME};
      return;
    }} """

#template for client
template_client = """#pragma once
#include "base.hpp"
#include <SimpleWeb/crypto.hpp>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/utility.hpp>
#include <stdexcept>
#include "definitions/LolLobbyAmbassadorMessage.hpp"
namespace {NAMESPACE} {{
  using HttpsResponsePtr = std::shared_ptr<SimpleWeb::Client<SimpleWeb::HTTPS>::Response>;
  using HttpsMap = SimpleWeb::CaseInsensitiveMultimap;
  using RequestError = LolLobbyAmbassadorMessage;

  struct ClientInfo {{
    std::string host;
    std::string auth;
  }};

  template<typename T>
  struct Result {{
    HttpsResponsePtr response;
    std::optional<T> data;
    std::optional<RequestError> error;
    Result(const HttpsResponsePtr& r) : response(r) {{
      int status_code = std::stoul(r->status_code);
      auto raw = r->content.string();
      if(status_code != 200) {{
        if(auto it = r->header.find("content-type"); it !=r->header.end() && it->second == "application/json") {{
          error = json::parse(raw).get<RequestError>();
        }} else {{
          error = RequestError{{}};
          error->httpStatus = status_code;
          error->message = raw;
        }}
      }} else {{
        data = json::parse(raw).get<T>();
      }}
    }}
    std::optional<T> operator->() {{
      return data;
    }}
    T operator*() const {{
      return *data;
    }}
    explicit operator bool() const {{
      return error == std::nullopt;
    }}
    bool operator !() const {{
      return error != std::nullopt;
    }}
  }};

  template<>
  struct Result<json> {{
    HttpsResponsePtr response;
    std::optional<json> data;
    std::optional<RequestError> error;
    Result(const HttpsResponsePtr& r) : response(r) {{
      int status_code = std::stoul(r->status_code);
      auto raw = r->content.string();
      if(status_code != 200) {{
        if(auto it = r->header.find("content-type"); it !=r->header.end() && it->second == "application/json") {{
          error = json::parse(raw).get<RequestError>();
        }} else {{
          error = RequestError{{}};
          error->httpStatus = status_code;
          error->message = raw;
        }}
      }} else {{
        if(auto it = r->header.find("content-type"); it !=r->header.end() && it->second == "application/json")
          data = json::parse(raw);
        else
          data = raw;
      }}
    }}
    std::optional<json> operator->() {{
      return data;
    }}
    json operator*() const {{
      return *data;
    }}
    explicit operator bool() const {{
      return error == std::nullopt;
    }}
    bool operator !() const {{
      return error != std::nullopt;
    }}
  }};

  template<>
  struct Result<void> {{
    HttpsResponsePtr response;
    std::optional<RequestError> error;
    Result(const HttpsResponsePtr& r) : response(r) {{
      int status_code = std::stoul(r->status_code);
      auto raw = r->content.string();
      if(status_code != 204) {{
        if(auto it = r->header.find("content-type"); it !=r->header.end() && it->second == "application/json") {{
          error = json::parse(raw).get<RequestError>();
        }} else {{
          error = RequestError{{}};
          error->httpStatus = status_code;
          error->message = raw;
        }}
      }}
    }}
    HttpsResponsePtr operator->() const {{
      return response;
    }}
    explicit operator bool() const {{
      return error == std::nullopt;
    }}
    bool operator !() const {{
      return error != std::nullopt;
    }}
  }};

  template<typename T>
  static inline void add2map(HttpsMap &map, const std::string& name, const T& v) {{
    map.insert({{ name, to_string(v) }});
  }}

  template<typename T>
  static inline void add2map(HttpsMap &map, const std::string& name, const std::optional<T>& v) {{
    if(v)
      map.insert({{ name, to_string(*v) }});
  }}

  template<typename T>
  static Result<T> HttpsRequestEmpty(const ClientInfo& info, const std::string& method, const std::string& path, const HttpsMap& query,
    const HttpsMap& headers) {{
    SimpleWeb::Client<SimpleWeb::HTTPS> client(info.host, false);
    return {{ client.request( method, path + SimpleWeb::QueryString::create(query), "", headers) }};
  }}
  template<typename T>
  static Result<T> HttpsRequestJson(const ClientInfo& info, const std::string& method, const std::string& path, const HttpsMap& query,
    const HttpsMap& headers, const json& body) {{
    SimpleWeb::Client<SimpleWeb::HTTPS> client(info.host, false);
    return {{ client.request( method, path + SimpleWeb::QueryString::create(query), body.dump(), headers) }};
  }}
  template<typename T>
  static Result<T> HttpsRequestFormData(const ClientInfo& info, const std::string& method, const std::string& path, const HttpsMap& query,
    const HttpsMap& headers, const HttpsMap& formdata) {{
    SimpleWeb::Client<SimpleWeb::HTTPS> client(info.host, false);
    return {{ client.request( method, path + SimpleWeb::QueryString::create(query), SimpleWeb::QueryString::create(formdata), headers) }};
  }}
}} """

#function tempalte
template_op = """#pragma once
#include "../client.hpp"
{INCLUDES}
namespace {NAMESPACE} {{
  /*{description}*/
  static Result<{RETURNS}> {NAME} (const ClientInfo& _info_{ARGS_R} {ARGS_O})
  {{ 
    HttpsMap _headers_ = {{ {{"Authorization", _info_.auth}} }}; {ARGS_HEADER}
    HttpsMap _query_; {ARGS_QUERY}
    HttpsMap _formdata_; {ARGS_FORM}
    const std::string _method_ = "{method}";
    const std::string _path_ = "{PATH}?"; {BODY}
  }}
}} """
template_op_arg_r = ',\n      const {TYPE}& {NAME} /*{description}*/'
template_op_arg_o = ',\n      const {TYPE}& {NAME} = std::nullopt /*{description}*/'
template_op_add_header = '\n    add2map(_headers_, "{name}", {NAME});'
template_op_add_query = '\n    add2map(_query_, "{name}", {NAME});'
template_op_add_fromdata = '\n    add2map(_formdata_, "{name}", {NAME});'
template_op_empty = """
    return HttpsRequestEmpty<{RETURNS}>(_info_, _method_, _path_ , _query_,  _headers_); """
template_op_json = """
    _headers_.insert({{ "content-type", "application/json" }});
    return HttpsRequestJson<{RETURNS}>(_info_, _method_, _path_  , _query_,  _headers_, {ARGNAME}); """
template_op_formdata = """
    _headers_.insert({{ "content-type", "application/x-www-form-urlencoded" }});
    return HttpsRequestFormData<{RETURNS}>(_info_, _method_, _path_ , _query_,  _headers_, _formdata_); """

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
    "object": "json", 
    "string": "std::string", 
    "map": "std::map<std::string, {0}>", 
    "vector": "std::vector<{0}>" 
}

#formats all include types if they are not builtins and empty
def type2include(parent, fmt, additional = ""):
    def _type2include(typ):
        if typ["type"] == "vector" or typ["type"] == "map":
            return "" if typ["elementType"] in builtins else typ["elementType"]
        return "" if typ["type"] in builtins else typ["type"]
    includes = { _type2include(f["type"]) for f in parent } 
    if not additional == "":
        includes.update({_type2include(additional)})
    return "".join([fmt.format(i) for i in includes if not i == ""])
#converts type or type holder to type :)
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

def generate_definitions(yolo, folder, namespace):
    mkpath("{0}/definitions/".format(folder))
    open(folder + "/base.hpp", "w+").write(template_base_hpp.format(NAMESPACE = namespace))
    for definition in yolo["definitions"]:
        with open("{0}/definitions/{1}.hpp".format(folder, definition["name"]), "w+") as file:
            if definition["isEnum"]:
                file.write(template_enum.format(**definition,NAMESPACE = namespace,
                    VALUES = "".join([template_enum_values.format(**m) for m in definition["values"]]),
                    TO_JSON = "".join([template_enum_to_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
                    FROM_JSON = "".join([template_enum_from_json.format(ENUM = definition["NAME"], **m) for m in definition["values"]]),
                ))
            else:
                file.write(template_struct.format(**definition,
                    NAMESPACE = namespace,
                    INCLUDES = type2include(definition["fields"], '#include "{0}.hpp"\n'),
                    MEMBERS = "".join([template_struct_members.format(**m) for m in definition["fields"]]),
                    TO_JSON = "".join([template_struct_to_json.format(**m) for m in definition["fields"]]),
                    FROM_JSON = "".join([template_struct_from_json.format(**m) for m in definition["fields"]]),
                ))            
    with open("{0}/definitions.hpp".format(folder), "w+") as file:
        file.write("#pragma once\n")
        file.write("\n".join(['#include "definitions/{0}.hpp"'.format(defi["name"]) for defi in yolo["definitions"]]))

def generate_ops(yolo, folder, namespace):
    mkpath("{0}/ops".format(folder))
    open(folder + "/client.hpp", "w+").write(template_client.format(NAMESPACE = namespace))
    for op in yolo["functions"]:
        with open("{0}/ops/{1}.hpp".format(folder, op["name"]), "w+") as file:
            body = template_op_empty.format(RETURNS = op["RETURNS"])
            for arg in op["arguments"]:
                if arg["in"] == "body":
                    body = template_op_json.format(RETURNS = op["RETURNS"], ARGNAME = arg["NAME"])
                    break
                elif arg["in"] == "formData":
                    body = template_op_formdata.format(RETURNS = op["RETURNS"])
                    break;
            file.write(template_op.format(**op, NAMESPACE = namespace,
                INCLUDES = type2include(op["arguments"], '#include "../definitions/{0}.hpp"\n', op["returns"]),
                ARGS_R = "".join([template_op_arg_r.format(**arg) for arg in op["arguments"] if not arg["optional"]]),
                ARGS_O = "".join([template_op_arg_o.format(**arg) for arg in op["arguments"] if arg["optional"]]),
                ARGS_HEADER = "".join([template_op_add_header.format(**arg) for arg in op["arguments"] if arg["in"] == "header"]),
                ARGS_QUERY = "".join([template_op_add_query.format(**arg) for arg in op["arguments"] if arg["in"] == "query"]),
                ARGS_FORM = "".join([template_op_add_fromdata.format(**arg) for arg in op["arguments"] if arg["in"] == "formData"]),
                PATH = op["url"].format(**{arg["name"] : '"+to_string({0})+"'.format(arg["NAME"]) for arg in op["arguments"] if arg["in"] == "path" }),
                BODY = body
            ))
    with open("{0}/ops.hpp".format(folder), "w+") as file:
        file.write('#pragma once\n#include "definitions.hpp"\n')
        file.write("\n".join(['#include "ops/{0}.hpp"'.format(op["name"]) for op in yolo["functions"]]))

def generate_cpp(yolo, folder, namespace):
    mkpath(folder)
    for definition in yolo["definitions"]:
        definition["NAME"] = "{0}".format(definition["name"].replace("-", "_"))
        for field in definition["fields"]:
            field["NAME"] = field["name"].replace("-", "_")
            field["TYPE"] = type2cpp(field)
        for value in definition["values"]:
            value["NAME"] = value["name"].replace("-", "_") + "_e"
    for function in yolo["functions"]:
        function["NAME"] = function["name"].replace("-", "_")
        function["RETURNS"] = type2cpp(function["returns"])
        for arg in function["arguments"]:
            arg["NAME"] = arg["name"].replace("-", "_")
            arg["TYPE"] = type2cpp(arg)
    for event in yolo["events"]:
        event["NAME"] = event["name"].replace("-", "_")
        event["TYPE"] = type2cpp(event)
    generate_definitions(yolo, folder, namespace)
    generate_ops(yolo, folder, namespace)

generate_cpp(json_load("yolo.json"), "output/cpp", "leagueapi")
