using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderGameflowSession {
    [DataMember(Name = "gameClient")]
    LolLobbyTeamBuilderGameflowGameClient GameClient {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderGameflowSession {\n");
      sb.Append("  GameClient: ").Append(GameClient).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}