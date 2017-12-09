using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LoyaltyRewards
    {
        [DataMember(Name = "freeRewardedChampionsCount")]
        public int FreeRewardedChampionsCount { get; set; }

        [DataMember(Name = "freeRewardedSkinsCount")]
        public int FreeRewardedSkinsCount { get; set; }

        [DataMember(Name = "ipBoost")]
        public int IpBoost { get; set; }

        [DataMember(Name = "xpBoost")]
        public int XpBoost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LoyaltyRewards {\n");
            sb.Append("  FreeRewardedChampionsCount: ").Append(FreeRewardedChampionsCount).Append("\n");
            sb.Append("  FreeRewardedSkinsCount: ").Append(FreeRewardedSkinsCount).Append("\n");
            sb.Append("  IpBoost: ").Append(IpBoost).Append("\n");
            sb.Append("  XpBoost: ").Append(XpBoost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}