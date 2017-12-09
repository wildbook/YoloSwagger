using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolBannersCapClashFlagEntitlementPayload
    {
        [DataMember(Name = "eventId")]
        public string EventId { get; set; }

        [DataMember(Name = "rewardSpec")]
        public LolBannersClashV2FlagRewardSpec RewardSpec { get; set; }

        [DataMember(Name = "rewardType")]
        public string RewardType { get; set; }

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