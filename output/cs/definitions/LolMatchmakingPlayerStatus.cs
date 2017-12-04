using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchmakingPlayerStatus {
    [DataMember(Name = "currentLobbyStatus")]
    LolMatchmakingLobbyStatus CurrentLobbyStatus {get; set;}

    [DataMember(Name = "lastQueuedLobbyStatus")]
    LolMatchmakingLobbyStatus LastQueuedLobbyStatus {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchmakingPlayerStatus {\n");
      sb.Append("  CurrentLobbyStatus: ").Append(CurrentLobbyStatus).Append("\n");
      sb.Append("  LastQueuedLobbyStatus: ").Append(LastQueuedLobbyStatus).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}