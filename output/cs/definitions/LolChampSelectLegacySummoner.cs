using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChampSelectLegacySummoner {
    [DataMember(Name = "summonerLevel")]
    uint SummonerLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChampSelectLegacySummoner {\n");
      sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}