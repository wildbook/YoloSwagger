using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClashRewardDefinition
    {
        [DataMember(Name = "rewardSpec")]
        public ClashRewardSpec RewardSpec { get; set; }

        [DataMember(Name = "rewardType")]
        public ClashRewardType RewardType { get; set; }

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