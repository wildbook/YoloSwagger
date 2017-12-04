using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LeaguesLcdsPlayerAggregatedStats {
    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "aggregatedStats")]
    LeaguesLcdsAggregatedStats AggregatedStats {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LeaguesLcdsPlayerAggregatedStats {\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  AggregatedStats: ").Append(AggregatedStats).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}