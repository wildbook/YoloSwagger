using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersUIOffer {
    [DataMember(Name = "discountPrice")]
    long DiscountPrice {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "owned")]
    bool Owned {get; set;}

    [DataMember(Name = "skinId")]
    int SkinId {get; set;}

    [DataMember(Name = "originalPrice")]
    long OriginalPrice {get; set;}

    [DataMember(Name = "skinName")]
    string SkinName {get; set;}

    [DataMember(Name = "revealed")]
    bool Revealed {get; set;}

    [DataMember(Name = "id")]
    string Id {get; set;}

    [DataMember(Name = "expirationDate")]
    string ExpirationDate {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersUIOffer {\n");
      sb.Append("  DiscountPrice: ").Append(DiscountPrice).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Owned: ").Append(Owned).Append("\n");
      sb.Append("  SkinId: ").Append(SkinId).Append("\n");
      sb.Append("  OriginalPrice: ").Append(OriginalPrice).Append("\n");
      sb.Append("  SkinName: ").Append(SkinName).Append("\n");
      sb.Append("  Revealed: ").Append(Revealed).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  ExpirationDate: ").Append(ExpirationDate).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}