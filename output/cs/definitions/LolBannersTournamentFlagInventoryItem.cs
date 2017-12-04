using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolBannersTournamentFlagInventoryItem {
    [DataMember(Name = "purchaseDate")]
    string PurchaseDate {get; set;}

    [DataMember(Name = "payload")]
    LolBannersCapClashFlagEntitlementPayload Payload {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolBannersTournamentFlagInventoryItem {\n");
      sb.Append("  PurchaseDate: ").Append(PurchaseDate).Append("\n");
      sb.Append("  Payload: ").Append(Payload).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}