using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LeaguesLcdsAggregatedStats {
    [DataMember(Name = "lifetimeStatistics")]
    LeaguesLcdsAggregatedStat[] LifetimeStatistics {get; set;}

    [DataMember(Name = "key")]
    LeaguesLcdsAggregatedStatsKey Key {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LeaguesLcdsAggregatedStats {\n");
      sb.Append("  LifetimeStatistics: ").Append(LifetimeStatistics).Append("\n");
      sb.Append("  Key: ").Append(Key).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}