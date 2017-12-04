using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLeaguesGameflowSession {
    [DataMember(Name = "phase")]
    LolLeaguesGameflowPhase Phase {get; set;}

    [DataMember(Name = "gameData")]
    LolLeaguesGameflowGameData GameData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLeaguesGameflowSession {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("  GameData: ").Append(GameData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}