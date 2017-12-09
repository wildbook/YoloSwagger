using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreBundleItemDTO
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "discountedRp")]
        public long DiscountedRp { get; set; }

        [DataMember(Name = "iconUrl")]
        public string IconUrl { get; set; }

        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "ip")]
        public long Ip { get; set; }

        [DataMember(Name = "itemId")]
        public int ItemId { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "quantity")]
        public uint Quantity { get; set; }

        [DataMember(Name = "rp")]
        public long Rp { get; set; }

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