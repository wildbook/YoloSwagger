using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersOfferRequest {
    [DataMember(Name = "itemId")]
    int ItemId {get; set;}

    [DataMember(Name = "inventoryType")]
    string InventoryType {get; set;}

    [DataMember(Name = "price")]
    long Price {get; set;}

    [DataMember(Name = "offerId")]
    string OfferId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersOfferRequest {\n");
      sb.Append("  ItemId: ").Append(ItemId).Append("\n");
      sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
      sb.Append("  OfferId: ").Append(OfferId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}