using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LoyaltyRewards
    {
        [DataMember(Name = "freeRewardedSkinsCount")]
        int FreeRewardedSkinsCount { get; set; }

        [DataMember(Name = "freeRewardedChampionsCount")]
        int FreeRewardedChampionsCount { get; set; }

        [DataMember(Name = "xpBoost")]
        int XpBoost { get; set; }

        [DataMember(Name = "ipBoost")]
        int IpBoost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LoyaltyRewards {\n");
            sb.Append("  FreeRewardedSkinsCount: ").Append(FreeRewardedSkinsCount).Append("\n");
            sb.Append("  FreeRewardedChampionsCount: ").Append(FreeRewardedChampionsCount).Append("\n");
            sb.Append("  XpBoost: ").Append(XpBoost).Append("\n");
            sb.Append("  IpBoost: ").Append(IpBoost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}