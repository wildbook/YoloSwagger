using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsAggregatedStats
    {
        [DataMember(Name = "key")]
        LeaguesLcdsAggregatedStatsKey Key { get; set; }

        [DataMember(Name = "lifetimeStatistics")]
        LeaguesLcdsAggregatedStat[] LifetimeStatistics { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsAggregatedStats {\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  LifetimeStatistics: ").Append(LifetimeStatistics).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}