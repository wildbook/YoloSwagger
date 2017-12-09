import json
import os

# convinience function to generate path
def mkpath(name):
    try:
        os.makedirs(os.path.dirname(name))
    except:
        True

# convinience function to escape name to variable friendly
def yolo_name_escape(name):
    return name.replace("-",  "_")

 # converts single {"type": ... . "elementType":... }  to typename
 # example typemape : {"uint32": "UInt32", "map":"Dictionary<string, {0}>"}
 # nonexistant types are returned as is :D
def yolo_type_convert(type,  typemap,  otherformat = "{0}"):
    if not type["type"] in typemap:
        return yolo_name_escape(otherformat.format(type["type"]))
    if not type["elementType"] == "":
        if not type["elementType"]  in typemap:
            return yolo_name_escape(typemap[type["type"]].format(otherformat.format(type["elementType"])))
        return yolo_name_escape(typemap[type["type"]].format(typemap[type["elementType"]].format()))
    return yolo_name_escape(typemap[type["type"]])

#generates info from /Help?format=Full and /v2/swagger.json
def yolo_init(helpjson,  swagjson):
    requests = {
        request["operationId"] : {
            "method": method, 
            "url": path, 
            "parameters": {
                param["name"]: param for param in request["parameters"]
            } 
        } for path, methods in swagjson["paths"].items() for method, request in methods.items() 
    }
    info = {
        "definitions" :[
            {
                "name": entry["name"], 
                "description": entry["description"], 
                "fields": [
                    {
                        "name": fname, 
                        "description": field["description"], 
                        "type": field["type"], 
                        "optional": field["optional"]
                        # this hackery deduplicates posible fields
                    } for fname, field in { fieldx["name"]: fieldx for fieldx in entry["fields"] }.items()
                ], 
                "values": [ 
                    {
                        "name": value["name"] , 
                        "description": value["description"], 
                        "value": value["value"]
                    } for value in entry["values"]
                ], 
                "isEnum": len(entry["values"]) > 0
            } for entry in helpjson["types"] 
        ], 
        "functions" : [
            {
                "name": function["name"], 
                "description": function["description"], 
                "returns": function["returns"], 
                "method": requests[function["name"]]["method"], 
                "url": requests[function["name"]]["url"], 
                "arguments":  [
                    {
                        "name": arg["name"], 
                        "description" : arg["description"], 
                        "type" : arg["type"], 
                        "optional": arg["optional"], 
                        "in": requests[function["name"]]["parameters"][arg["name"]]["in"]
                    } for arg in function["arguments"]
                ]
            } for function in helpjson["functions"] if function["name"] in requests
        ], 
       "events": [
            {
                "name": event["name"], 
                "description": event["description"], 
                "type": event["type"]
            } for event in helpjson["events"]
       ]
    }
    return info

# saves json to file
def json_save(info,  filename):
    open(filename,  "w+").write(json.dumps(info, sort_keys=True, indent=2, separators=(',', ': ')))

# loads json from file
def json_load(filename):
    return json.load(open(filename))
#json_save(yolo_init(json_load("help.json"),  json_load("lol.json")),  "yolo.json")       
