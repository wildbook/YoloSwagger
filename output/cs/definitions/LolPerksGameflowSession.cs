using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksGameflowSession {
    [DataMember(Name = "phase")]
    LolPerksGameflowPhase Phase {get; set;}

    [DataMember(Name = "gameData")]
    LolPerksGameflowGameData GameData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksGameflowSession {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("  GameData: ").Append(GameData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}