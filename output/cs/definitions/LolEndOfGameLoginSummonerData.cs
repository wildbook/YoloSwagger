using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEndOfGameLoginSummonerData {
    [DataMember(Name = "summonerLevelAndPoints")]
    LolEndOfGameLoginSummonerLevelAndPoints SummonerLevelAndPoints {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEndOfGameLoginSummonerData {\n");
      sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}