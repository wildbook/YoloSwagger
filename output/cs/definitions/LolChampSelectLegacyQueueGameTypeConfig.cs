using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectLegacyQueueGameTypeConfig
    {
        [DataMember(Name = "allowTrades")]
        public bool AllowTrades { get; set; }

        [DataMember(Name = "battleBoost")]
        public bool BattleBoost { get; set; }

        [DataMember(Name = "maxAllowableBans")]
        public int MaxAllowableBans { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyQueueGameTypeConfig {\n");
            sb.Append("  AllowTrades: ").Append(AllowTrades).Append("\n");
            sb.Append("  BattleBoost: ").Append(BattleBoost).Append("\n");
            sb.Append("  MaxAllowableBans: ").Append(MaxAllowableBans).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}