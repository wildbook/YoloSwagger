using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LeaguesLcdsAggregatedStatsKey {
    [DataMember(Name = "gameMode")]
    string GameMode {get; set;}

    [DataMember(Name = "userId")]
    ulong UserId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LeaguesLcdsAggregatedStatsKey {\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  UserId: ").Append(UserId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}