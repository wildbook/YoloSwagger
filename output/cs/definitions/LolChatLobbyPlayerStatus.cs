using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatLobbyPlayerStatus {
    [DataMember(Name = "currentLobbyStatus")]
    LolChatLobbyStatus CurrentLobbyStatus {get; set;}

    [DataMember(Name = "lastQueuedLobbyStatus")]
    LolChatLobbyStatus LastQueuedLobbyStatus {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatLobbyPlayerStatus {\n");
      sb.Append("  CurrentLobbyStatus: ").Append(CurrentLobbyStatus).Append("\n");
      sb.Append("  LastQueuedLobbyStatus: ").Append(LastQueuedLobbyStatus).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}