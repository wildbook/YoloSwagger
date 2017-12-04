using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct AllSummonerData {
    [DataMember(Name = "summoner")]
    PrivateSummonerDTO Summoner {get; set;}

    [DataMember(Name = "summonerLevelAndPoints")]
    SummonerLevelAndPoints SummonerLevelAndPoints {get; set;}

    [DataMember(Name = "summonerLevel")]
    SummonerLevel SummonerLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class AllSummonerData {\n");
      sb.Append("  Summoner: ").Append(Summoner).Append("\n");
      sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
      sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}