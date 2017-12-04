using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPurchaseWidgetWallet {
    [DataMember(Name = "balances")]
    LolPurchaseWidgetBalance[] Balances {get; set;}

    [DataMember(Name = "version")]
    int Version {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPurchaseWidgetWallet {\n");
      sb.Append("  Balances: ").Append(Balances).Append("\n");
      sb.Append("  Version: ").Append(Version).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}