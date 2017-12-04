using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponse {
    [DataMember(Name = "items")]
    LolPurchaseWidgetValidationResponseItem[] Items {get; set;}

    [DataMember(Name = "valid")]
    bool Valid {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPurchaseWidgetValidationResponse {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("  Valid: ").Append(Valid).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}