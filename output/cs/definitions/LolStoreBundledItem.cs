using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolStoreBundledItem
    {
        [DataMember(Name = "itemId")]
        int ItemId { get; set; }

        [DataMember(Name = "discountPrices")]
        LolStoreBundledItemCost[] DiscountPrices { get; set; }

        [DataMember(Name = "quantity")]
        uint Quantity { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreBundledItem {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  DiscountPrices: ").Append(DiscountPrices).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}