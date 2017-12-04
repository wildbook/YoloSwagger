using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolBannersInventoryResponse {
    [DataMember(Name = "items")]
    LolBannersInventoryItemsByType Items {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolBannersInventoryResponse {\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}