using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGameflowGameflowSession {
    [DataMember(Name = "phase")]
    LolGameflowGameflowPhase Phase {get; set;}

    [DataMember(Name = "gameClient")]
    LolGameflowGameflowGameClient GameClient {get; set;}

    [DataMember(Name = "gameDodge")]
    LolGameflowGameflowGameDodge GameDodge {get; set;}

    [DataMember(Name = "gameData")]
    LolGameflowGameflowGameData GameData {get; set;}

    [DataMember(Name = "map")]
    LolGameflowGameflowGameMap Map {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGameflowGameflowSession {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("  GameClient: ").Append(GameClient).Append("\n");
      sb.Append("  GameDodge: ").Append(GameDodge).Append("\n");
      sb.Append("  GameData: ").Append(GameData).Append("\n");
      sb.Append("  Map: ").Append(Map).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}