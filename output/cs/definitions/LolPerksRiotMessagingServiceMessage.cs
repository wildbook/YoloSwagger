using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksRiotMessagingServiceMessage
    {
        [DataMember(Name = "timestamp")]
        long Timestamp { get; set; }

        [DataMember(Name = "version")]
        string Version { get; set; }

        [DataMember(Name = "resource")]
        string Resource { get; set; }

        [DataMember(Name = "payload")]
        string Payload { get; set; }

        [DataMember(Name = "service")]
        string Service { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksRiotMessagingServiceMessage {\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("  Resource: ").Append(Resource).Append("\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("  Service: ").Append(Service).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}