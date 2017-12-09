using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerMissionRewardDTO
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "iconUrl")]
        public string IconUrl { get; set; }

        [DataMember(Name = "itemId")]
        public string ItemId { get; set; }

        [DataMember(Name = "media")]
        public MissionRewardMediaDTO Media { get; set; }

        [DataMember(Name = "rewardFulfilled")]
        public bool RewardFulfilled { get; set; }

        [DataMember(Name = "rewardType")]
        public string RewardType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMissionRewardDTO {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  IconUrl: ").Append(IconUrl).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Media: ").Append(Media).Append("\n");
            sb.Append("  RewardFulfilled: ").Append(RewardFulfilled).Append("\n");
            sb.Append("  RewardType: ").Append(RewardType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}