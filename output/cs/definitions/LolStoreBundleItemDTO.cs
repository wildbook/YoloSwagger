using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolStoreBundleItemDTO
    {
        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "discountedRp")]
        long DiscountedRp { get; set; }

        [DataMember(Name = "iconUrl")]
        string IconUrl { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        [DataMember(Name = "ip")]
        long Ip { get; set; }

        [DataMember(Name = "itemId")]
        int ItemId { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "owned")]
        bool Owned { get; set; }

        [DataMember(Name = "quantity")]
        uint Quantity { get; set; }

        [DataMember(Name = "rp")]
        long Rp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreBundleItemDTO {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DiscountedRp: ").Append(DiscountedRp).Append("\n");
            sb.Append("  IconUrl: ").Append(IconUrl).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  Ip: ").Append(Ip).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  Rp: ").Append(Rp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}