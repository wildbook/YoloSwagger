using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersPurchaseResponse {
    [DataMember(Name = "items")]
    LolPersonalizedOffersPurchaseItem[] Items {get; set;}

    [DataMember(Name = "wallet")]
    LolPersonalizedOffersWallet Wallet {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersPurchaseResponse {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  Wallet: ").Append(Wallet).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}