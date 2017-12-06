using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPersonalizedOffersPurchaseItem
    {
        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        int ItemId { get; set; }

        [DataMember(Name = "pricePaid")]
        long PricePaid { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersPurchaseItem {\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  PricePaid: ").Append(PricePaid).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}