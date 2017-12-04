using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashMatchmakingSearchResource {
    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "dodgeData")]
    LolClashMatchmakingDodgeData DodgeData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashMatchmakingSearchResource {\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  DodgeData: ").Append(DodgeData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}