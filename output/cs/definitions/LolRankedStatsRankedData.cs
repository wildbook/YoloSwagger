using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolRankedStatsRankedData {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "rankedData")]
    LolRankedStatsRankedEntry[] RankedData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolRankedStatsRankedData {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  RankedData: ").Append(RankedData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}