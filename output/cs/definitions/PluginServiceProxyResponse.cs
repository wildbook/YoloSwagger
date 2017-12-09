using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PluginServiceProxyResponse
    {
        [DataMember(Name = "error")]
        public string Error { get; set; }

        [DataMember(Name = "methodName")]
        public string MethodName { get; set; }

        [DataMember(Name = "payload")]
        public string Payload { get; set; }

        [DataMember(Name = "serviceName")]
        public string ServiceName { get; set; }

        [DataMember(Name = "status")]
        public string Status { get; set; }

        [DataMember(Name = "uuid")]
        public string Uuid { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginServiceProxyResponse {\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("  MethodName: ").Append(MethodName).Append("\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("  ServiceName: ").Append(ServiceName).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Uuid: ").Append(Uuid).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}