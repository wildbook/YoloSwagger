using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerAutoFillDto {
    [DataMember(Name = "autoFillQueues")]
    LolSummonerAutoFillQueueDto[] AutoFillQueues {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerAutoFillDto {\n");
      sb.Append("  AutoFillQueues: ").Append(AutoFillQueues).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}