using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseWidgetConfig {
    [DataMember(Name = "enabled")]
    bool Enabled {get; set;}

    [DataMember(Name = "purchaseDisclaimerEnabled")]
    bool PurchaseDisclaimerEnabled {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPurchaseWidgetPurchaseWidgetConfig {\n");
      sb.Append("  Enabled: ").Append(Enabled).Append("\n");
      sb.Append("  PurchaseDisclaimerEnabled: ").Append(PurchaseDisclaimerEnabled).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}