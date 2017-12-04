using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatChatRankedEntry {
    [DataMember(Name = "division")]
    ulong Division {get; set;}

    [DataMember(Name = "wins")]
    ulong Wins {get; set;}

    [DataMember(Name = "rankedTier")]
    LolChatChatRankedTier RankedTier {get; set;}

    [DataMember(Name = "games")]
    ulong Games {get; set;}

    [DataMember(Name = "leagueName")]
    string LeagueName {get; set;}

    [DataMember(Name = "rankedQueue")]
    LolChatChatRankedQueue RankedQueue {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatChatRankedEntry {\n");
      sb.Append("  Division: ").Append(Division).Append("\n");
      sb.Append("  Wins: ").Append(Wins).Append("\n");
      sb.Append("  RankedTier: ").Append(RankedTier).Append("\n");
      sb.Append("  Games: ").Append(Games).Append("\n");
      sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
      sb.Append("  RankedQueue: ").Append(RankedQueue).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}