using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsAggregatedStats
    {
        [DataMember(Name = "key")]
        public LeaguesLcdsAggregatedStatsKey Key { get; set; }

        [DataMember(Name = "lifetimeStatistics")]
        public LeaguesLcdsAggregatedStat[] LifetimeStatistics { get; set; }

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