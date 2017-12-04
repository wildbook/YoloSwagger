using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource {
    [DataMember(Name = "backwardsTransitionReason")]
    string BackwardsTransitionReason {get; set;}

    [DataMember(Name = "slotIds")]
    int[] SlotIds {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource {\n");
      sb.Append("  BackwardsTransitionReason: ").Append(BackwardsTransitionReason).Append("\n");
      sb.Append("  SlotIds: ").Append(SlotIds).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}