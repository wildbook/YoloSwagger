import json
import time
import uuid
import re
import os

template_enum = (
'using System.Runtime.Serialization;'     '\n'   
'namespace {namespace}.Definitions'       '\n'     
'{{'                                      '\n'       
'{enum_description}'
'    [DataContract]'                      '\n'
'    public enum {enum_name}'             '\n'
'    {{'                                  '\n'
'{fields}'
'    }}'                                  '\n'
'}}'                                      '\n'
)

template_enum_field = (
'{value_description}'
'        [DataMember(Name = "{value_name}")]'     '\n'
'        {value_cs_type} = {value_cs_name},'      '\n'
''                                                '\n'
)

template_struct = (
'using System.Text;'                                    '\n'
'using System.Runtime.Serialization;'                   '\n'
'using System.Collections.Generic;'                     '\n'
'namespace {namespace}.Definitions'                     '\n'
'{{'                                                    '\n'
'{struct_description}'
'    [DataContract]'                                    '\n'
'    public struct {struct_name}'                       '\n'
'    {{'                                                '\n'
'{field_items}'
'        public override string ToString()'             '\n'
'        {{'                                            '\n'
'            var sb = new StringBuilder();'             '\n'
'            sb.Append("class {struct_name} {{\\n");'   '\n'
'{string_builder_items}'
'            sb.Append("}}\\n");'                       '\n'
'            return sb.ToString();'                     '\n'
'        }}'                                            '\n'
'    }}'                                                '\n'
'}}'
)

template_struct_field = (
'{field_description}'
'        [DataMember(Name = \"{field_name}\")]'                      '\n'
'        public {field_cs_type} {field_cs_name} {{ get; set; }}'     '\n'
''                                                                   '\n'
)

template_request = (
'using Newtonsoft.Json;'                                                                                 '\n'
'using System.Collections.Generic;'                                                                      '\n'
'using System.Threading.Tasks;'                                                                          '\n'
'using {namespace}.Definitions;'                                                                         '\n'
''                                                                                                       '\n'
'namespace {namespace}.Requests {{'                                                                      '\n'
'    public static partial class Request'                                                                '\n'
'    {{'                                                                                                 '\n'
'        public static Task{return_value} {request_name}(LeagueClientSession session{arguments}) =>'     '\n'
'            session.SendRequestAsync{return_value}('                                                    '\n'
'                              method: "{http_method}",'                                                 '\n'
'                            endpoint: $"{http_endpoint}",'                                              '\n'
'                               query: {http_query},'                                                    '\n'
'                             headers: {http_headers},'                                                  '\n'
'                                body: {http_body},'                                                     '\n'
'                       serializeBody: {serialize_body});'                                               '\n'
'    }}'                                                                                                 '\n'
'}}'                                                                                                     '\n'
)

template_event = (                                                                                                              
'using System;'                                                                                                                              '\n'
'using Newtonsoft.Json;'                                                                                                                     '\n'
'using {namespace}.Definitions;'                                                                                                             '\n'
''                                                                                                                                           '\n'
'namespace {namespace}.Events'                                                                                                               '\n'
'{{'                                                                                                                                         '\n'
'    public partial class LeagueClientEvents'                                                                                                '\n'
'    {{'                                                                                                                                     '\n'
'        private readonly object _{private_event_name}Lock = new object();'                                                                  '\n'
'        private event EventHandler<{return_type}> _{private_event_name};'                                                                   '\n'
'        public event EventHandler<{return_type}> {public_event_name}'                                                                       '\n'
'        {{'                                                                                                                                 '\n'
'            add'                                                                                                                            '\n'
'            {{'                                                                                                                             '\n'
'                if (_{private_event_name} == null)'                                                                                         '\n'
'                    _session.Socket.Send(JsonConvert.SerializeObject(new object[] {{ WampMessageType.Subscribe, "{event_name}" }}));'       '\n'
'                lock (_{private_event_name}Lock)'                                                                                           '\n'
'                    _{private_event_name} += value;'                                                                                         '\n'
'            }}'                                                                                                                             '\n'
'            remove'                                                                                                                         '\n'
'            {{'                                                                                                                             '\n'
'                lock (_{private_event_name}Lock)'                                                                                           '\n'
'                    _{private_event_name} -= value;'                                                                                        '\n'
'                if (_{private_event_name} == null)'                                                                                         '\n'
'                    _session.Socket.Send(JsonConvert.SerializeObject(new object[] {{ WampMessageType.Unsubscribe, "{event_name}" }}));'     '\n'
'            }}'                                                                                                                             '\n'
'        }}'                                                                                                                             '\n'
'    }}'                                                                                                                                     '\n'
'}}'
)

template_league_client_event_invoker = '            eventInvokers.Add("{event_name}", data => _{private_event_name}.Invoke(this, data.ToObject<{return_type}>()));\n'

template_league_client_events = (
'using {namespace}.Definitions;'                                                                                    '\n'
'using Newtonsoft.Json.Linq;'                                                                                       '\n'
'using System;'                                                                                                     '\n'
'using System.Collections.Generic;'                                                                                 '\n'
''                                                                                                                  '\n'
'namespace {namespace}.Events'                                                                                      '\n'
'{{'                                                                                                                '\n'
'    public partial class LeagueClientEvents'                                                                       '\n'
'    {{'                                                                                                            '\n'
'        private readonly LeagueClientSession _session;'                                                            '\n'
'        internal Dictionary<string, Action<JObject>> eventInvokers = new Dictionary<string, Action<JObject>>();'   '\n'
''                                                                                                                  '\n'
'        internal LeagueClientEvents(LeagueClientSession session)'                                                  '\n'
'        {{'                                                                                                        '\n'
'            _session = session;'                                                                                   '\n'
'{event_invokers}'
'        }}'                                                                                                        '\n'
'    }}'                                                                                                            '\n'
'}}'
)

template_lockfile = (
'using System.IO;'                                                                                                                    '\n'
''                                                                                                                                    '\n'
'namespace {namespace}'                                                                                                               '\n'
'{{'                                                                                                                                  '\n'
'    public class Lockfile'                                                                                                           '\n'
'    {{'                                                                                                                              '\n'
'        public readonly string ConnectionType;'                                                                                      '\n'
'        public readonly string Password;'                                                                                            '\n'
'        public readonly int Port;'                                                                                                   '\n'
'        public readonly int ProcessId;'                                                                                              '\n'
'        public readonly string ProcessName;'                                                                                         '\n'
''                                                                                                                                    '\n'
'        public Lockfile(string processName, int processId, int port, string password, string connectionType)'                        '\n'
'        {{'                                                                                                                          '\n'
'            ProcessName = processName;'                                                                                              '\n'
'            ProcessId = processId;'                                                                                                  '\n'
'            Port = port;'                                                                                                            '\n'
'            Password = password;'                                                                                                    '\n'
'            ConnectionType = connectionType;'                                                                                        '\n'
'        }}'                                                                                                                          '\n'
''                                                                                                                                    '\n'
'        public Lockfile(int port, string password, string connectionType = "https")'                                                 '\n'
'        {{'                                                                                                                          '\n'
'            Port = port;'                                                                                                            '\n'
'            Password = password;'                                                                                                    '\n'
'            ConnectionType = connectionType;'                                                                                        '\n'
'        }}'                                                                                                                          '\n'
''                                                                                                                                    '\n'
'        public static Lockfile FromPath(string lockfilePath)'                                                                        '\n'
'        {{'                                                                                                                          '\n'
'            using (var fileStream = new FileStream('                                                                                 '\n'
'                lockfilePath,'                                                                                                       '\n'
'                FileMode.Open,'                                                                                                      '\n'
'                FileAccess.Read,'                                                                                                    '\n'
'                FileShare.ReadWrite))'                                                                                               '\n'
'            {{'                                                                                                                      '\n'
'                using (var streamReader = new StreamReader(fileStream))'                                                             '\n'
'                {{'                                                                                                                  '\n'
'                    var contents = streamReader.ReadToEnd().Split(\':\');'                                                           '\n'
'                    return new Lockfile(contents[0], int.Parse(contents[1]), int.Parse(contents[2]), contents[3], contents[4]);'     '\n'
'                }}'                                                                                                                  '\n'
'            }}'                                                                                                                      '\n'
'        }}'                                                                                                                          '\n'
'    }}'                                                                                                                              '\n'
'}}'
)

template_riot_exception = (
'using System;'                                                                                                                                     '\n'
'using Newtonsoft.Json;'                                                                                                                            '\n'
''                                                                                                                                                  '\n'
'namespace {namespace}'                                                                                                                             '\n'
'{{'                                                                                                                                                '\n'
'    // TODO: Look up the "correct" way of bundling error data with an exception. (override \'Data\'?)'                                             '\n'
'    // Officially called LolLobbyAmbassadorMessage?'                                                                                               '\n'
'    [JsonObject(MemberSerialization.OptIn)]'                                                                                                       '\n'
'    public class RiotException : Exception'                                                                                                        '\n'
'    {{'                                                                                                                                            '\n'
'        public string ErrorCode {{ get; }}'                                                                                                        '\n'
'        public int? HttpStatus {{ get; }}'                                                                                                         '\n'
'        public object ImplementationDetails {{ get; }}'                                                                                            '\n'
'        public object Payload {{ get; }}'                                                                                                          '\n'
''                                                                                                                                                  '\n'
'        [JsonConstructor]'                                                                                                                         '\n'
'        public RiotException(string errorCode, int? httpStatus, object implementationDetails, string message, object payload) : base(message)'     '\n'
'        {{'                                                                                                                                        '\n'
'            ErrorCode = errorCode;'                                                                                                                '\n'
'            HttpStatus = httpStatus;'                                                                                                              '\n'
'            ImplementationDetails = implementationDetails;'                                                                                        '\n'
'            Payload = payload;'                                                                                                                    '\n'
'        }}'                                                                                                                                        '\n'
'    }}'                                                                                                                                            '\n'
'}}'
)

template_wamp_call_error = (
'using System;'                                                                     '\n'
'using System.Text;'                                                                '\n'
''                                                                                  '\n'
'namespace {namespace}'                                                             '\n'
'{{'                                                                                '\n'
'    public class WampCallError : Exception'                                        '\n'
'    {{'                                                                            '\n'
'        public string ErrorUri;'                                                   '\n'
'        public string ErrorDesc;'                                                  '\n'
'        public string ErrorDetails;'                                               '\n'
''                                                                                  '\n'
'        public WampCallError(string message) : base(message) {{ }}'                '\n'
''                                                                                  '\n'
'        public override string ToString()'                                         '\n'
'        {{'                                                                        '\n'
'            var sb = new StringBuilder();'                                         '\n'
'            sb.Append("class WampCallError {{\\n");'                               '\n'
'            sb.Append("  ErrorUri: ").Append(ErrorUri).Append("\\n");'             '\n'
'            sb.Append("  ErrorDesc: ").Append(ErrorDesc).Append("\\n");'           '\n'
'            sb.Append("  ErrorDetails: ").Append(ErrorDetails).Append("\\n");'     '\n'
'            sb.Append("}}\\n");'                                                   '\n'
'            return sb.ToString();'                                                 '\n'
'        }}'                                                                        '\n'
'    }}'                                                                            '\n'
'}}'
)

template_wamp_call_result = (
'using System.Text;'                                                    '\n'
''                                                                      '\n'
'namespace {namespace}'                                                 '\n'
'{{'                                                                    '\n'
'    public class WampCallResult'                                       '\n'
'    {{'                                                                '\n'
'        public string Result;'                                         '\n'
''                                                                      '\n'
'        public override string ToString()'                             '\n'
'        {{'                                                            '\n'
'            var sb = new StringBuilder();'                             '\n'
'            sb.Append("class WampCallResult {{\\n");'                  '\n'
'            sb.Append("  Result: ").Append(Result).Append("\\n");'     '\n'
'            sb.Append("}}\\n");'                                       '\n'
'            return sb.ToString();'                                     '\n'
'        }}'                                                            '\n'
'    }}'                                                                '\n'
'}}'
)

template_wamp_event = (
'using Newtonsoft.Json;'                                                                             '\n'
'using Newtonsoft.Json.Linq;'                                                                        '\n'
''                                                                                                   '\n'
'namespace {namespace}'                                                                              '\n'
'{{'                                                                                                 '\n'
'    [JsonObject(MemberSerialization.OptIn)]'                                                        '\n'
'    internal class WampEvent'                                                                       '\n'
'    {{'                                                                                             '\n'
'        public readonly WampMessageType EventType;'                                                 '\n'
'        public readonly string EventName;'                                                          '\n'
'        public readonly JObject EventData;'                                                         '\n'
''                                                                                                   '\n'
'        [JsonConstructor]'                                                                          '\n'
'        public WampEvent(WampMessageType wampMessageType, string eventName, JObject eventData)'     '\n'
'        {{'                                                                                         '\n'
'            EventType = wampMessageType;'                                                           '\n'
'            EventName = eventName;'                                                                 '\n'
'            EventData = eventData;'                                                                 '\n'
'        }}'                                                                                         '\n'
'    }}'                                                                                             '\n'
'}}'
)

template_wamp_message_type = (
'namespace {namespace}'                 '\n'
'{{'                                     '\n'
'    internal enum WampMessageType'     '\n'
'    {{'                                '\n'
'        Welcome = 0,'                  '\n'
'        Prefix = 1,'                   '\n'
'        Call = 2,'                     '\n'
'        Callresult = 3,'               '\n'
'        Callerror = 4,'                '\n'
'        Subscribe = 5,'                '\n'
'        Unsubscribe = 6,'              '\n'
'        Publish = 7,'                  '\n'
'        Event = 8'                     '\n'
'    }}'                                '\n'
'}}'
)

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

builtins_optional = {
    "bool": "bool?", 
    "int8": "sbyte?", 
    "uint8": "byte?",
    "int16": "short?", 
    "uint16": "ushort?",
    "int32": "int?", 
    "uint32": "uint?",
    "int64": "long?", 
    "uint64": "ulong?", 
    "float": "float?", 
    "double": "double?", 
    "object": "dynamic",
    "string": "string", 
    "map": "Dictionary<string, {0}>", 
    "vector": "{0}[]"
}

def type_convert(type,  typemap,  otherformat = "{0}"):
    if not type["type"] in typemap:
        return otherformat.format(type["type"])
    if not type["elementType"] == "":
        if not type["elementType"]  in typemap:
            return typemap[type["type"]].format(otherformat.format(type["elementType"]))
        return typemap[type["type"]].format(typemap[type["elementType"]].format())
    return typemap[type["type"]]

def fix_case(input, firstUpper = True):
    output = re.sub(r'(?!^)-([a-zA-Z0-9])', lambda m: m.group(1).upper(), input)
    output = re.sub(r'(?!^)_([a-zA-Z0-9])', lambda m: '_' + m.group(1).upper(), output)
    if firstUpper:
        return ''.join(output[0].upper() + output[1:])
    return output

def type2cs(type):
    if not type["type"] in builtins:
        return fix_case(type["type"])
    if (len(type["elementType"]) > 0 and not type["elementType"] in builtins):
        type["elementType"] = fix_case(type["elementType"])
    return type_convert(type, builtins)
    
def type2cs_optional(type):
    if not type["type"] in builtins:
        return fix_case(type["type"]) + "?"
    if (len(type["elementType"]) > 0 and not type["elementType"] in builtins):
        type["elementType"] = fix_case(type["elementType"])
    return type_convert(type, builtins_optional)

def generate_enum(file, namespace, name, enum):
    fields = ''
    for value in enum["values"]:
        fields += template_enum_field.format(value_description = "    // {}\n".format(value["description"]) if value["description"] else '',
                           value_name = value["name"],
                           value_cs_type = fix_case(value["name"]),
                           value_cs_name = value["value"])

    file.write(template_enum.format(namespace = namespace,
              enum_description = "  // {}\n".format(enum["description"]) if enum["description"] else '',
              enum_name = name,
              fields = fields))

def generate_struct(file, namespace, name, struct):
    field_items = ''
    for details in struct["fields"]:
        field_items += (template_struct_field.format(field_description = '        // {}\n'.format(details["description"]) if details["description"] else '',
                                                            field_name = details["name"],
                                                         field_cs_type = type2cs_optional(details["type"]) if details["optional"] else type2cs(details["type"]),
                                                         field_cs_name = "_" + fix_case(details["name"]) if fix_case(details["name"]) == name else fix_case(details["name"])))

    file.write(template_struct.format(namespace = namespace,
                             struct_description = '    // {}\n'.format(struct["description"]) if struct["description"] else '',
                                    struct_name = name,
                                    field_items = field_items,
                           string_builder_items = ''.join('            sb.Append("  {0}: ").Append({0}).Append("\\n");\n'.format("_" + fix_case(field["name"]) if fix_case(field["name"]) == name else fix_case(field["name"])) for field in struct["fields"]) ))

def generate_requests(info, folder, namespace):
    mkpath(folder)
    for function in info["functions"]:
        filename = folder + function["name"] + ".cs"
        file = open(filename, "w+")
        sorted_args = sorted(function["arguments"], key=lambda x: (x["optional"], x["name"]))
        query_items = [item for item in sorted_args if item["in"] == "query"]
        header_items = [item for item in sorted_args if item["in"] == "header"]
        body_items = [item for item in sorted_args if item["in"] == "body"]
        file.write(template_request.format(namespace = namespace,
                        return_value = "<{0}>".format(type2cs(function["returns"])) if function["returns"]["type"] else '',
                        request_name = function["name"],
                           arguments = ''.join(", {0} {1}".format(type2cs_optional(argument["type"]) if argument["optional"] else type2cs(argument["type"]), "_" + fix_case(argument["name"], False) + (" = null" if argument["optional"] else "")) for argument in sorted_args),
                         http_method = function["method"].upper(),
                       http_endpoint = re.sub(r'{[^{]*([a-zA-Z_])[^}]*}', lambda m: fix_case(m.group(0), False), function["url"]).replace("{", "{_"),
                          http_query = 'new Dictionary<string, string>{{{0}}}'.format(''.join('{{"{0}", JsonConvert.SerializeObject({1})}}, '.format(query["name"], "_" + fix_case(query["name"], False)) for query in query_items)) if query_items else "null",
                        http_headers = 'new Dictionary<string, string>{{{0}}}'.format(''.join('{{"{0}", JsonConvert.SerializeObject({1})}}, '.format(header["name"], "_" + fix_case(header["name"], False)) for header in header_items)) if header_items else "null",
                           http_body = "_" + fix_case(body_items[0]["name"], False) if body_items else "null",
                      serialize_body = "true"))

def generate_csproj(folder, namespace, info, guid, dotnet):
    with open("templates/cs/project.csproj", "rt") as fin:
        with open(folder + "/" + namespace + ".csproj", "wt") as fout:
            fout.write(fin.read().format(ROOT_NAMESPACE = namespace))

def generate_sln(folder, namespace, project_guid, solution_guid):
    with open("templates/cs/solution.sln", "rt") as fin:
        with open(folder + "/" + namespace + ".sln", "wt") as fout:
            fout.write(fin.read().format(ROOT_NAMESPACE = namespace,
                                           PROJECT_GUID = project_guid,
                                          SOLUTION_GUID = solution_guid))

def generate_utilities(folder, namespace):
    with open("templates/cs/LeagueClientSession.cs", "rt") as fin:
        with open(folder + "/LeagueClientSession.cs", "wt") as fout:
            fout.write(fin.read().format(namespace = namespace))
    with open(folder + "/Lockfile.cs", "wt") as fout:
        fout.write(template_lockfile.format(namespace = namespace))
    with open(folder + "/RiotException.cs", "wt") as fout:
        fout.write(template_riot_exception.format(namespace = namespace))
    with open(folder + "/WampCallError.cs", "wt") as fout:
        fout.write(template_wamp_call_error.format(namespace = namespace))
    with open(folder + "/WampCallResult.cs", "wt") as fout:
        fout.write(template_wamp_call_result.format(namespace = namespace))
    with open(folder + "/WampEvent.cs", "wt") as fout:
        fout.write(template_wamp_event.format(namespace = namespace))
    with open(folder + "/WampMessageType.cs", "wt") as fout:
        fout.write(template_wamp_message_type.format(namespace = namespace))
    

def generate_defintions(info, folder, namespace):
    for definition in info["definitions"]:
        name = fix_case(definition["name"])
        filename = folder + name + ".cs"
        mkpath(folder)
        file = open(filename,  "wt")
        # basic include and namespace
        if definition["isEnum"]:
            generate_enum(file, namespace, name, definition)
        else:
            generate_struct(file, namespace, name, definition)
    
def generate_events(info, folder, namespace):
    mkpath(folder)
    event_invokers = ''
    for function in info["events"]:
        event_invokers += template_league_client_event_invoker.format(event_name = function["name"],
                                                              private_event_name = fix_case(function["name"], False),
                                                                     return_type = type2cs(function["type"]))
                                                             
        filename = folder + fix_case(function["name"], False) + ".cs"
        file = open(filename, "w+")
        file.write(template_event.format(namespace = namespace,
                                       return_type = type2cs(function["type"]),
                                        event_name = function["name"],
                                private_event_name = fix_case(function["name"], False),
                                 public_event_name = fix_case(function["name"])))
    
    filename = folder + "LeagueClientEvents.cs"
    file = open(filename, "w+")
    file.write(template_league_client_events.format(namespace = namespace,
                                               event_invokers = event_invokers))
    
            
# saves json to file
def json_save(info,  filename):
    open(filename,  "w+").write(json.dumps(info, sort_keys=True, indent=2, separators=(',', ': ')))

# loads json from file
def json_load(filename):
    return json.load(open(filename))

# convenience function to generate path
def mkpath(name):
    try:
        os.makedirs(name)
    except:
        True
            
output_namespace = "LeagueClientApi"

solution_dir = "output/cs/"
solution_guid = str(uuid.uuid4())

project_dir = solution_dir + output_namespace + "/"
project_guid = str(uuid.uuid4())

dotnet_version = "4.7"

yolo_json = json_load("yolo.json")

print("Generating events...")
generate_events(yolo_json, project_dir + "Events/", output_namespace)
print("Generating definitions...")
generate_defintions(yolo_json, project_dir + "Definitions/", output_namespace)
print("Generating requests...")
generate_requests(yolo_json, project_dir + "Requests/", output_namespace)
print("Generating utilities...")
generate_utilities(project_dir, output_namespace)
print("Generating Visual Studio project...")
generate_csproj(project_dir, output_namespace, yolo_json, project_guid, dotnet_version)
print("Generating Visual Studio solution...")
generate_sln(solution_dir, output_namespace, project_guid, solution_guid)

print("Generating .bat files for compilation...")
with open(solution_dir + "/Build.bat", "wt") as fout:
    fout.write(('@echo off'                                  '\n'
                'dotnet publish -c Release -r win10-x86'     '\n'
                'dotnet publish -c Release -r win10-x64'     '\n'
                'echo Done!'                                 '\n'
                'ping 127.0.0.1 -n 4 > nul'                  '\n'))

print("Done!")
time.sleep(1)
