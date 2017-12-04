using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersPlayerStatus {
    [DataMember(Name = "currentLobbyStatus")]
    LolSuggestedPlayersSuggestedPlayersLobbyStatus CurrentLobbyStatus {get; set;}

    [DataMember(Name = "lastQueuedLobbyStatus")]
    LolSuggestedPlayersSuggestedPlayersLobbyStatus LastQueuedLobbyStatus {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSuggestedPlayersSuggestedPlayersPlayerStatus {\n");
      sb.Append("  CurrentLobbyStatus: ").Append(CurrentLobbyStatus).Append("\n");
      sb.Append("  LastQueuedLobbyStatus: ").Append(LastQueuedLobbyStatus).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}