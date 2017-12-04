using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootCollectionsEmote {
    [DataMember(Name = "itemId")]
    long ItemId {get; set;}

    [DataMember(Name = "ownershipType")]
    LolLootInventoryOwnership OwnershipType {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootCollectionsEmote {\n");
      sb.Append("  ItemId: ").Append(ItemId).Append("\n");
      sb.Append("  OwnershipType: ").Append(OwnershipType).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}