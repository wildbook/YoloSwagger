using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreSummonerLevelAndPoints {
    [DataMember(Name = "summonerLevel")]
    uint SummonerLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreSummonerLevelAndPoints {\n");
      sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}