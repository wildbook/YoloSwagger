using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterPeriodAggregatedStatsDTO
    {
        [DataMember(Name = "bracketSize")]
        public int BracketSize { get; set; }

        [DataMember(Name = "matchStats")]
        public RosterMatchAggregatedStatsDTO[] MatchStats { get; set; }

        [DataMember(Name = "period")]
        public int Period { get; set; }

        [DataMember(Name = "time")]
        public long Time { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterPeriodAggregatedStatsDTO {\n");
            sb.Append("  BracketSize: ").Append(BracketSize).Append("\n");
            sb.Append("  MatchStats: ").Append(MatchStats).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  Time: ").Append(Time).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}