using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashRosterPlayerAggregatedStats {
    [DataMember(Name = "rawStatsMax")]
    Dictionary<string, int> RawStatsMax {get; set;}

    [DataMember(Name = "rawStatsSum")]
    Dictionary<string, int> RawStatsSum {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashRosterPlayerAggregatedStats {\n");
      sb.Append("  RawStatsMax: ").Append(RawStatsMax).Append("\n");
      sb.Append("  RawStatsSum: ").Append(RawStatsSum).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}