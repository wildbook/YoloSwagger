using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersReportedPlayer
    {
        [DataMember(Name = "reportedSummonerId")]
        public ulong ReportedSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersReportedPlayer {\n");
            sb.Append("  ReportedSummonerId: ").Append(ReportedSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}