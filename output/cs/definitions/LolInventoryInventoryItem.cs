using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolInventoryInventoryItem
    {
        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        public int ItemId { get; set; }

        [DataMember(Name = "ownershipType")]
        public LolInventoryItemOwnershipType OwnershipType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolInventoryInventoryItem {\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  OwnershipType: ").Append(OwnershipType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}