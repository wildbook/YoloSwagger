using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEndOfGameGameflowGameData {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEndOfGameGameflowGameData {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}