using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreRiotMessagingServiceMessage
    {
        [DataMember(Name = "payload")]
        public string Payload { get; set; }

        [DataMember(Name = "resource")]
        public string Resource { get; set; }

        [DataMember(Name = "service")]
        public string Service { get; set; }

        [DataMember(Name = "timestamp")]
        public long Timestamp { get; set; }

        [DataMember(Name = "version")]
        public string Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreRiotMessagingServiceMessage {\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("  Resource: ").Append(Resource).Append("\n");
            sb.Append("  Service: ").Append(Service).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}