using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerStatSummaries
    {
        [DataMember(Name = "playerStatSummarySet")]
        PlayerStatSummary[] PlayerStatSummarySet { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerStatSummaries {\n");
            sb.Append("  PlayerStatSummarySet: ").Append(PlayerStatSummarySet).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}