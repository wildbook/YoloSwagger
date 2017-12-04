using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolHonorV2FullTeamVote {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolHonorV2FullTeamVote {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}