using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClashRewardDefinition {
    [DataMember(Name = "rewardSpec")]
    ClashRewardSpec RewardSpec {get; set;}

    [DataMember(Name = "rewardType")]
    ClashRewardType RewardType {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClashRewardDefinition {\n");
      sb.Append("  RewardSpec: ").Append(RewardSpec).Append("\n");
      sb.Append("  RewardType: ").Append(RewardType).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}