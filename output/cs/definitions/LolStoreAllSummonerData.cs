using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreAllSummonerData {
    [DataMember(Name = "summoner")]
    LolStoreSummoner Summoner {get; set;}

    [DataMember(Name = "summonerLevelAndPoints")]
    LolStoreSummonerLevelAndPoints SummonerLevelAndPoints {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreAllSummonerData {\n");
      sb.Append("  Summoner: ").Append(Summoner).Append("\n");
      sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}