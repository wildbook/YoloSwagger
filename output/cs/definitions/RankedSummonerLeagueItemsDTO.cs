using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RankedSummonerLeagueItemsDTO {
    [DataMember(Name = "summonerLeagues")]
    RankedLeagueItemDTO[] SummonerLeagues {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RankedSummonerLeagueItemsDTO {\n");
      sb.Append("  SummonerLeagues: ").Append(SummonerLeagues).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}