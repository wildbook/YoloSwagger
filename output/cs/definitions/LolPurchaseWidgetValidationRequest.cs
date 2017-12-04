using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPurchaseWidgetValidationRequest {
    [DataMember(Name = "items")]
    LolPurchaseWidgetValidationRequestItem[] Items {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPurchaseWidgetValidationRequest {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}