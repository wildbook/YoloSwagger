using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ActiveBoosts
    {
        [DataMember(Name = "firstWinOfTheDayStartTime")]
        string FirstWinOfTheDayStartTime { get; set; }

        [DataMember(Name = "ipBoostEndDate")]
        string IpBoostEndDate { get; set; }

        [DataMember(Name = "ipBoostPerWinCount")]
        uint IpBoostPerWinCount { get; set; }

        [DataMember(Name = "ipLoyaltyBoost")]
        uint IpLoyaltyBoost { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "xpBoostEndDate")]
        string XpBoostEndDate { get; set; }

        [DataMember(Name = "xpBoostPerWinCount")]
        uint XpBoostPerWinCount { get; set; }

        [DataMember(Name = "xpLoyaltyBoost")]
        uint XpLoyaltyBoost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ActiveBoosts {\n");
            sb.Append("  FirstWinOfTheDayStartTime: ").Append(FirstWinOfTheDayStartTime).Append("\n");
            sb.Append("  IpBoostEndDate: ").Append(IpBoostEndDate).Append("\n");
            sb.Append("  IpBoostPerWinCount: ").Append(IpBoostPerWinCount).Append("\n");
            sb.Append("  IpLoyaltyBoost: ").Append(IpLoyaltyBoost).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  XpBoostEndDate: ").Append(XpBoostEndDate).Append("\n");
            sb.Append("  XpBoostPerWinCount: ").Append(XpBoostPerWinCount).Append("\n");
            sb.Append("  XpLoyaltyBoost: ").Append(XpLoyaltyBoost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}