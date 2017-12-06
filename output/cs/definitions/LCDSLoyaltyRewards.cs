using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LCDSLoyaltyRewards
    {
        [DataMember(Name = "champions")]
        LCDSChampionReward[] Champions { get; set; }

        [DataMember(Name = "ipBoost")]
        int IpBoost { get; set; }

        [DataMember(Name = "xpBoost")]
        int XpBoost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LCDSLoyaltyRewards {\n");
            sb.Append("  Champions: ").Append(Champions).Append("\n");
            sb.Append("  IpBoost: ").Append(IpBoost).Append("\n");
            sb.Append("  XpBoost: ").Append(XpBoost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}