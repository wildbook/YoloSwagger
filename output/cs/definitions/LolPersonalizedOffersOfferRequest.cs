using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersOfferRequest
    {
        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        public int ItemId { get; set; }

        [DataMember(Name = "offerId")]
        public string OfferId { get; set; }

        [DataMember(Name = "price")]
        public long Price { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersOfferRequest {\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  OfferId: ").Append(OfferId).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}