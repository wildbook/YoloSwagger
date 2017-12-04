using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyPlayerStatus {
    [DataMember(Name = "currentLobbyStatus")]
    LolLobbyLobbyStatus CurrentLobbyStatus {get; set;}

    [DataMember(Name = "lastQueuedLobbyStatus")]
    LolLobbyLobbyStatus LastQueuedLobbyStatus {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyPlayerStatus {\n");
      sb.Append("  CurrentLobbyStatus: ").Append(CurrentLobbyStatus).Append("\n");
      sb.Append("  LastQueuedLobbyStatus: ").Append(LastQueuedLobbyStatus).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}