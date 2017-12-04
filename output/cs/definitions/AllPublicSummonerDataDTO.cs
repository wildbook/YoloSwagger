using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct AllPublicSummonerDataDTO {
    [DataMember(Name = "summoner")]
    BasePublicSummonerDTO Summoner {get; set;}

    [DataMember(Name = "summonerLevelAndPoints")]
    SummonerLevelAndPoints SummonerLevelAndPoints {get; set;}

    [DataMember(Name = "summonerLevel")]
    SummonerLevel SummonerLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class AllPublicSummonerDataDTO {\n");
      sb.Append("  Summoner: ").Append(Summoner).Append("\n");
      sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
      sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}