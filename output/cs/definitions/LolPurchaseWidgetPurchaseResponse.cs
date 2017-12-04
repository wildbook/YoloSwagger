using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseResponse {
    [DataMember(Name = "items")]
    LolPurchaseWidgetPurchaseItem[] Items {get; set;}

    [DataMember(Name = "wallet")]
    LolPurchaseWidgetWallet Wallet {get; set;}

    [DataMember(Name = "transactions")]
    LolPurchaseWidgetTransaction[] Transactions {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPurchaseWidgetPurchaseResponse {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  Wallet: ").Append(Wallet).Append("\n");
      sb.Append("  Transactions: ").Append(Transactions).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}