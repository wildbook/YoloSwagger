using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolRankedStatsRankedSummonerResource {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolRankedStatsRankedSummonerResource {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}