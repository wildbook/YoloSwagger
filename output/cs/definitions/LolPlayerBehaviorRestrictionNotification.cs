using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPlayerBehaviorRestrictionNotification {
    [DataMember(Name = "displayReformCard")]
    bool DisplayReformCard {get; set;}

    [DataMember(Name = "gamesRemaining")]
    long GamesRemaining {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    [DataMember(Name = "source")]
    LolPlayerBehaviorNotificationSource Source {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPlayerBehaviorRestrictionNotification {\n");
      sb.Append("  DisplayReformCard: ").Append(DisplayReformCard).Append("\n");
      sb.Append("  GamesRemaining: ").Append(GamesRemaining).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Source: ").Append(Source).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}