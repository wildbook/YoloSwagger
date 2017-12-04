using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MatchmakingSearchResource {
    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "errors")]
    MatchmakingSearchErrorResource[] Errors {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MatchmakingSearchResource {\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}