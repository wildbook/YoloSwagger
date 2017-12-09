using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterAggregatedStatsDTO
    {
        [DataMember(Name = "periodStats")]
        public RosterPeriodAggregatedStatsDTO[] PeriodStats { get; set; }

        [DataMember(Name = "playerStats")]
        public Dictionary<string, RosterPlayerAggregatedStatsDTO> PlayerStats { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterAggregatedStatsDTO {\n");
            sb.Append("  PeriodStats: ").Append(PeriodStats).Append("\n");
            sb.Append("  PlayerStats: ").Append(PlayerStats).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}