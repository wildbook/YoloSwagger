using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolInventoryInventoryItem
    {
        [DataMember(Name = "itemId")]
        int ItemId { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        [DataMember(Name = "ownershipType")]
        LolInventoryItemOwnershipType OwnershipType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolInventoryInventoryItem {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  OwnershipType: ").Append(OwnershipType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}