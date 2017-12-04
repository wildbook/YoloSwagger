using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolHonorV2Ballot {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "eligiblePlayers")]
    LolHonorV2EligiblePlayer[] EligiblePlayers {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolHonorV2Ballot {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  EligiblePlayers: ").Append(EligiblePlayers).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}