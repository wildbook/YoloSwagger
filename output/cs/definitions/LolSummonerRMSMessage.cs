using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSummonerRMSMessage
    {
        [DataMember(Name = "payload")]
        string Payload { get; set; }

        [DataMember(Name = "timestamp")]
        long Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerRMSMessage {\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}