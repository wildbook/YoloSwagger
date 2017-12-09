using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ActiveBoostsLcdsSummonerActiveBoostsDTO
    {
        [DataMember(Name = "ipBoostEndDate")]
        public long IpBoostEndDate { get; set; }

        [DataMember(Name = "ipBoostPerWinCount")]
        public uint IpBoostPerWinCount { get; set; }

        [DataMember(Name = "ipLoyaltyBoost")]
        public uint IpLoyaltyBoost { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "xpBoostEndDate")]
        public long XpBoostEndDate { get; set; }

        [DataMember(Name = "xpBoostPerWinCount")]
        public uint XpBoostPerWinCount { get; set; }

        [DataMember(Name = "xpLoyaltyBoost")]
        public uint XpLoyaltyBoost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ActiveBoostsLcdsSummonerActiveBoostsDTO {\n");
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