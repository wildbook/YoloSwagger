using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SpectateGameInfo {
    [DataMember(Name = "dropInSpectateGameId")]
    string DropInSpectateGameId {get; set;}

    [DataMember(Name = "allowObserveMode")]
    string AllowObserveMode {get; set;}

    [DataMember(Name = "gameQueueType")]
    string GameQueueType {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SpectateGameInfo {\n");
      sb.Append("  DropInSpectateGameId: ").Append(DropInSpectateGameId).Append("\n");
      sb.Append("  AllowObserveMode: ").Append(AllowObserveMode).Append("\n");
      sb.Append("  GameQueueType: ").Append(GameQueueType).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}