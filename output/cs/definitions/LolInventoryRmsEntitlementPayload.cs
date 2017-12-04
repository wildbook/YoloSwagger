using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolInventoryRmsEntitlementPayload {
    [DataMember(Name = "itemId")]
    string ItemId {get; set;}

    [DataMember(Name = "itemTypeId")]
    string ItemTypeId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolInventoryRmsEntitlementPayload {\n");
      sb.Append("  ItemId: ").Append(ItemId).Append("\n");
      sb.Append("  ItemTypeId: ").Append(ItemTypeId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}