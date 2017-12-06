using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolBannersCapClashFlagEntitlementPayload
    {
        [DataMember(Name = "eventId")]
        string EventId { get; set; }

        [DataMember(Name = "rewardSpec")]
        LolBannersClashV2FlagRewardSpec RewardSpec { get; set; }

        [DataMember(Name = "rewardType")]
        string RewardType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolBannersCapClashFlagEntitlementPayload {\n");
            sb.Append("  EventId: ").Append(EventId).Append("\n");
            sb.Append("  RewardSpec: ").Append(RewardSpec).Append("\n");
            sb.Append("  RewardType: ").Append(RewardType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}