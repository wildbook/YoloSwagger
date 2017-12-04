using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderAfkCheckStateV1 {
    [DataMember(Name = "remainingAfkMillis")]
    int RemainingAfkMillis {get; set;}

    [DataMember(Name = "afkReady")]
    bool AfkReady {get; set;}

    [DataMember(Name = "inventoryDraft")]
    LolLobbyTeamBuilderTbdInventory InventoryDraft {get; set;}

    [DataMember(Name = "maxAfkMillis")]
    uint MaxAfkMillis {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderAfkCheckStateV1 {\n");
      sb.Append("  RemainingAfkMillis: ").Append(RemainingAfkMillis).Append("\n");
      sb.Append("  AfkReady: ").Append(AfkReady).Append("\n");
      sb.Append("  InventoryDraft: ").Append(InventoryDraft).Append("\n");
      sb.Append("  MaxAfkMillis: ").Append(MaxAfkMillis).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}