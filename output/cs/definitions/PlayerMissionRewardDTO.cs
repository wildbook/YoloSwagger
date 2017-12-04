using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerMissionRewardDTO {
    [DataMember(Name = "itemId")]
    string ItemId {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "media")]
    MissionRewardMediaDTO Media {get; set;}

    [DataMember(Name = "rewardType")]
    string RewardType {get; set;}

    [DataMember(Name = "iconUrl")]
    string IconUrl {get; set;}

    [DataMember(Name = "rewardFulfilled")]
    bool RewardFulfilled {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerMissionRewardDTO {\n");
      sb.Append("  ItemId: ").Append(ItemId).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Media: ").Append(Media).Append("\n");
      sb.Append("  RewardType: ").Append(RewardType).Append("\n");
      sb.Append("  IconUrl: ").Append(IconUrl).Append("\n");
      sb.Append("  RewardFulfilled: ").Append(RewardFulfilled).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}