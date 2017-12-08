import json
import os

# convinience function to generate path
def mkpath(name):
    try:
        os.makedirs(os.path.dirname(name))
    except:
        True

# convinience function to escape name to variable friendly
def info_name_escape(name):
    return name.replace("-",  "_")

# checks what  single {"type": ... . "elementType":... } imports
def info_type_imports(type):
    if type["type"] == "vector":
        return {"vector", type["elementType"]}
    if type["type"] == "map":
        return {"string", "map", type["elementType"]}
    return {type["type"]}

# checks what function definition imports
def info_function_imports(function):
    result = info_type_imports(function["returns"])
    for arg in function["arguments"]:
        result.update(info_type_imports(function["arguments"][arg]["type"]))
    return result

# checks what custom type defintion imports
def info_struct_imports(typedef):
    result = set()
    for field in typedef["fields"]:
        result.update(info_type_imports(typedef["fields"][field]["type"]))
    return result

 # converts single {"type": ... . "elementType":... }  to typename
 # example typemape : {"uint32": "UInt32", "map":"Dictionary<string, {0}>"}
 # nonexistant types are returned as is :D
def info_type_convert(type,  typemap,  otherformat = "{0}"):
    if not type["type"] in typemap:
        return otherformat.format(type["type"])
    if not type["elementType"] == "":
        if not type["elementType"] in typemap:
            return typemap[type["type"]].format(otherformat.format(type["elementType"]))
        return typemap[type["type"]].format(typemap[type["elementType"]].format(type["elementType"]))
    return typemap[type["type"]]

#generates info from /Help?format=Full and /v2/swagger.json
def info_init(helpjson,  swagjson):
    info = {
        "definitions" :{
            entry["name"] :  {
                "description": entry["description"], 
                "fields": {
                    field["name"] : {
                        "description": field["description"], 
                        "type": field["type"], 
                        "optional": field["optional"]
                    } for field in entry["fields"]
                }, 
                "values": { 
                    value["name"] : {
                        "description": value["description"], 
                        "value": value["value"]
                    } for value in entry["values"]
                }, 
                "isEnum": len(entry["values"]) > 0
            } for entry in helpjson["types"] 
        }, 
        "functions" : {
            function["name"] : {
                "description": function["description"], 
                "returns": function["returns"], 
                "arguments":  {
                    arg["name"] : {
                        "description" : arg["description"], 
                        "type" : arg["type"]
                    } for arg in function["arguments"]
                }, 
                "optional":  [ 
                    arg["name"] for arg in function["arguments"] if arg["optional"]
                ], 
                "required":  [ 
                    arg["name"] for arg in function["arguments"] if not arg["optional"]
                ]
            } for function in helpjson["functions"]
        }, 
       "events": {
            event["name"] : {
                "description": event["description"], 
                "type": event["type"]
            } for event in helpjson["events"]
       }, 
       "requests": {
            request["operationId"] : {
                "method": method, 
                "url": path, 
                "query": [ param["name"] for param in request["parameters"] if param["in"] == "query" ], 
                "header": [ param["name"] for param in request["parameters"] if param["in"] == "header" ], 
                "path": [ param["name"] for param in request["parameters"] if param["in"] == "path" ], 
                "formData": [ param["name"] for param in request["parameters"] if param["in"] == "formData" ], 
                "body": [ param["name"] for param in request["parameters"] if param["in"] == "body" ]
            } for path, methods in swagjson["paths"].items() for method, request in methods.items() 
        }
    }
    return info

# saves json to file
def json_save(info,  filename):
    open(filename,  "w+").write(json.dumps(info, sort_keys=True, indent=2, separators=(',', ': ')))

# loads json from file
def json_load(filename):
    return json.load(open(filename))
