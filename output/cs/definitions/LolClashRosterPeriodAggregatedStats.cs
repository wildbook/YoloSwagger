using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRosterPeriodAggregatedStats
    {
        [DataMember(Name = "bracketSize")]
        int BracketSize { get; set; }

        [DataMember(Name = "matchStats")]
        LolClashRosterMatchAggregatedStats[] MatchStats { get; set; }

        [DataMember(Name = "period")]
        int Period { get; set; }

        [DataMember(Name = "time")]
        long Time { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterPeriodAggregatedStats {\n");
            sb.Append("  BracketSize: ").Append(BracketSize).Append("\n");
            sb.Append("  MatchStats: ").Append(MatchStats).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  Time: ").Append(Time).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}