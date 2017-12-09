import json
import os

#generates info from /Help?format=Full and /v2/swagger.json
def yolo(helpjson,  swagjson, 
    fixname = lambda parent: None, 
    fixtype = lambda parent: None, 
    fixreturn = lambda parent: None
    ):
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
                "fixedname": fixname(entry), 
                "description": entry["description"], 
                "fields": [
                    {
                        "name": fname, 
                        "fixedname": fixname(field), 
                        "description": field["description"], 
                        "type": field["type"], 
                        "fixtype": fixtype(field), 
                        "optional": field["optional"]
                        # this hackery deduplicates posible fields
                    } for fname, field in { fieldx["name"]: fieldx for fieldx in entry["fields"] }.items()
                ], 
                "values": [ 
                    {
                        "name": value["name"] , 
                        "fixedname": fixname(value), 
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
                "fixedname": fixname(function),
                "description": function["description"], 
                "returns": function["returns"], 
                "fixedreturn": fixreturn(function), 
                "method": requests[function["name"]]["method"], 
                "url": requests[function["name"]]["url"], 
                "arguments":  [
                    {
                        "name": arg["name"], 
                        "fixedname": fixname(arg), 
                        "description" : arg["description"], 
                        "type" : arg["type"], 
                        "fixedtype": fixtype(arg), 
                        "optional": arg["optional"], 
                        "in": requests[function["name"]]["parameters"][arg["name"]]["in"]
                    } for arg in function["arguments"]
                ]
            } for function in helpjson["functions"] if function["name"] in requests
        ], 
       "events": [
            {
                "name": event["name"], 
                "fixedname": fixname(event), 
                "fixedtype": fixtype(event), 
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

# convinience function to generate path
def mkpath(name):
    try:
        os.makedirs(os.path.dirname(name))
    except:
        True

#json_save(yolo_init(json_load("help.json"),  json_load("lol.json")),  "yolo.json")       
