using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PluginServiceProxyResponse
    {
        [DataMember(Name = "status")]
        string Status { get; set; }

        [DataMember(Name = "methodName")]
        string MethodName { get; set; }

        [DataMember(Name = "uuid")]
        string Uuid { get; set; }

        [DataMember(Name = "serviceName")]
        string ServiceName { get; set; }

        [DataMember(Name = "error")]
        string Error { get; set; }

        [DataMember(Name = "payload")]
        string Payload { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginServiceProxyResponse {\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  MethodName: ").Append(MethodName).Append("\n");
            sb.Append("  Uuid: ").Append(Uuid).Append("\n");
            sb.Append("  ServiceName: ").Append(ServiceName).Append("\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}