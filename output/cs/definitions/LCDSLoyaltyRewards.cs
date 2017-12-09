using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LCDSLoyaltyRewards
    {
        [DataMember(Name = "champions")]
        public LCDSChampionReward[] Champions { get; set; }

        [DataMember(Name = "ipBoost")]
        public int IpBoost { get; set; }

        [DataMember(Name = "xpBoost")]
        public int XpBoost { get; set; }

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