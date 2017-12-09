using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MatchmakingLcdsMatchMakerPayload
    {
        [DataMember(Name = "LEAVER_BUSTER_ACCESS_TOKEN")]
        public string LEAVER_BUSTER_ACCESS_TOKEN { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsMatchMakerPayload {\n");
            sb.Append("  LEAVER_BUSTER_ACCESS_TOKEN: ").Append(LEAVER_BUSTER_ACCESS_TOKEN).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}