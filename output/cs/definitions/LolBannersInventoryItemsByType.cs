using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolBannersInventoryItemsByType {
    [DataMember(Name = "TOURNAMENT_FLAG")]
    LolBannersTournamentFlagInventoryItem[] TOURNAMENT_FLAG {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolBannersInventoryItemsByType {\n");
      sb.Append("  TOURNAMENT_FLAG: ").Append(TOURNAMENT_FLAG).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}