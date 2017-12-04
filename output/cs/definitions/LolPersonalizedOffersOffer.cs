using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersOffer {
    [DataMember(Name = "itemId")]
    int ItemId {get; set;}

    [DataMember(Name = "discountPrice")]
    long DiscountPrice {get; set;}

    [DataMember(Name = "owned")]
    bool Owned {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "offerId")]
    string OfferId {get; set;}

    [DataMember(Name = "spotIndex")]
    uint SpotIndex {get; set;}

    [DataMember(Name = "expirationDate")]
    string ExpirationDate {get; set;}

    [DataMember(Name = "inventoryType")]
    string InventoryType {get; set;}

    [DataMember(Name = "revealed")]
    bool Revealed {get; set;}

    [DataMember(Name = "originalPrice")]
    long OriginalPrice {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersOffer {\n");
      sb.Append("  ItemId: ").Append(ItemId).Append("\n");
      sb.Append("  DiscountPrice: ").Append(DiscountPrice).Append("\n");
      sb.Append("  Owned: ").Append(Owned).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  OfferId: ").Append(OfferId).Append("\n");
      sb.Append("  SpotIndex: ").Append(SpotIndex).Append("\n");
      sb.Append("  ExpirationDate: ").Append(ExpirationDate).Append("\n");
      sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
      sb.Append("  Revealed: ").Append(Revealed).Append("\n");
      sb.Append("  OriginalPrice: ").Append(OriginalPrice).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}