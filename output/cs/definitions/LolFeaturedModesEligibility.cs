using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolFeaturedModesEligibility {
    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "eligible")]
    bool Eligible {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolFeaturedModesEligibility {\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  Eligible: ").Append(Eligible).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}