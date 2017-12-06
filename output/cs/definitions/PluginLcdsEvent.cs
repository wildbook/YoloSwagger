using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PluginLcdsEvent
    {
        [DataMember(Name = "body")]
        dynamic Body { get; set; }

        [DataMember(Name = "clientId")]
        string ClientId { get; set; }

        [DataMember(Name = "subtopic")]
        string Subtopic { get; set; }

        [DataMember(Name = "typeName")]
        string TypeName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginLcdsEvent {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  ClientId: ").Append(ClientId).Append("\n");
            sb.Append("  Subtopic: ").Append(Subtopic).Append("\n");
            sb.Append("  TypeName: ").Append(TypeName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}