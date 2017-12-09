using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatPlayerStatSummaries
    {
        [DataMember(Name = "playerStatSummarySet")]
        public LolChatChatPlayerStatSummary[] PlayerStatSummarySet { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatPlayerStatSummaries {\n");
            sb.Append("  PlayerStatSummarySet: ").Append(PlayerStatSummarySet).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}