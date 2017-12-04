using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolHonorV2ServiceProxyRetrieveProfileResponse {
    [DataMember(Name = "checkpoint")]
    int Checkpoint {get; set;}

    [DataMember(Name = "honorLevel")]
    int HonorLevel {get; set;}

    [DataMember(Name = "rewardsLocked")]
    bool RewardsLocked {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolHonorV2ServiceProxyRetrieveProfileResponse {\n");
      sb.Append("  Checkpoint: ").Append(Checkpoint).Append("\n");
      sb.Append("  HonorLevel: ").Append(HonorLevel).Append("\n");
      sb.Append("  RewardsLocked: ").Append(RewardsLocked).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}