using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsInviter {
    [DataMember(Name = "previousSeasonHighestTier")]
    string PreviousSeasonHighestTier {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsInviter {\n");
      sb.Append("  PreviousSeasonHighestTier: ").Append(PreviousSeasonHighestTier).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}