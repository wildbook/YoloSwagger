using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource {
    [DataMember(Name = "state")]
    LolLobbyTeamBuilderMatchmakingReadyCheckState State {get; set;}

    [DataMember(Name = "playerResponse")]
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse PlayerResponse {get; set;}

    [DataMember(Name = "declinerIds")]
    ulong[] DeclinerIds {get; set;}

    [DataMember(Name = "timer")]
    float Timer {get; set;}

    [DataMember(Name = "dodgeWarning")]
    LolLobbyTeamBuilderMatchmakingDodgeWarning DodgeWarning {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderMatchmakingReadyCheckResource {\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  PlayerResponse: ").Append(PlayerResponse).Append("\n");
      sb.Append("  DeclinerIds: ").Append(DeclinerIds).Append("\n");
      sb.Append("  Timer: ").Append(Timer).Append("\n");
      sb.Append("  DodgeWarning: ").Append(DodgeWarning).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}