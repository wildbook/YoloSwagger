using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerGameloopPlayerInfoV1 {
    [DataMember(Name = "rerollDataBag")]
    LolSummonerRerollDataBagForClientV1 RerollDataBag {get; set;}

    [DataMember(Name = "autoFillDataBagByQueueId")]
    dynamic AutoFillDataBagByQueueId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerGameloopPlayerInfoV1 {\n");
      sb.Append("  RerollDataBag: ").Append(RerollDataBag).Append("\n");
      sb.Append("  AutoFillDataBagByQueueId: ").Append(AutoFillDataBagByQueueId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}