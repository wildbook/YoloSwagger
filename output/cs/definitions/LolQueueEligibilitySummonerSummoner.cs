using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolQueueEligibilitySummonerSummoner {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "summonerLevel")]
    uint SummonerLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolQueueEligibilitySummonerSummoner {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}