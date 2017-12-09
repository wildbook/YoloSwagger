using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersOffer
    {
        [DataMember(Name = "discountPrice")]
        public long DiscountPrice { get; set; }

        [DataMember(Name = "expirationDate")]
        public string ExpirationDate { get; set; }

        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        public int ItemId { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "offerId")]
        public string OfferId { get; set; }

        [DataMember(Name = "originalPrice")]
        public long OriginalPrice { get; set; }

        [DataMember(Name = "owned")]
        public bool Owned { get; set; }

        [DataMember(Name = "revealed")]
        public bool Revealed { get; set; }

        [DataMember(Name = "spotIndex")]
        public uint SpotIndex { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersOffer {\n");
            sb.Append("  DiscountPrice: ").Append(DiscountPrice).Append("\n");
            sb.Append("  ExpirationDate: ").Append(ExpirationDate).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  OfferId: ").Append(OfferId).Append("\n");
            sb.Append("  OriginalPrice: ").Append(OriginalPrice).Append("\n");
            sb.Append("  Owned: ").Append(Owned).Append("\n");
            sb.Append("  Revealed: ").Append(Revealed).Append("\n");
            sb.Append("  SpotIndex: ").Append(SpotIndex).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}