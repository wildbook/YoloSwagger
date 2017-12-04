using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MatchmakingLcdsQueueRestricted {
    [DataMember(Name = "summoner")]
    MatchmakingLcdsSummoner Summoner {get; set;}

    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "message")]
    string Message {get; set;}

    [DataMember(Name = "reasonFailed")]
    string ReasonFailed {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MatchmakingLcdsQueueRestricted {\n");
      sb.Append("  Summoner: ").Append(Summoner).Append("\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  Message: ").Append(Message).Append("\n");
      sb.Append("  ReasonFailed: ").Append(ReasonFailed).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}