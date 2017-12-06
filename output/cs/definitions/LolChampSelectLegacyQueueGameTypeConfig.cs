using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectLegacyQueueGameTypeConfig
    {
        [DataMember(Name = "allowTrades")]
        bool AllowTrades { get; set; }

        [DataMember(Name = "battleBoost")]
        bool BattleBoost { get; set; }

        [DataMember(Name = "maxAllowableBans")]
        int MaxAllowableBans { get; set; }

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