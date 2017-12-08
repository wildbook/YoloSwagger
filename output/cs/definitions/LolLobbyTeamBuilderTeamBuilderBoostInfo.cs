using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderTeamBuilderBoostInfo
    {
        [DataMember(Name = "activatorCellId")]
        long ActivatorCellId { get; set; }

        [DataMember(Name = "allowBattleBoost")]
        bool AllowBattleBoost { get; set; }

        [DataMember(Name = "cost")]
        long Cost { get; set; }

        [DataMember(Name = "battleBoostActivated")]
        bool BattleBoostActivated { get; set; }

        [DataMember(Name = "unlockedSkinIds")]
        long[] UnlockedSkinIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTeamBuilderBoostInfo {\n");
            sb.Append("  ActivatorCellId: ").Append(ActivatorCellId).Append("\n");
            sb.Append("  AllowBattleBoost: ").Append(AllowBattleBoost).Append("\n");
            sb.Append("  Cost: ").Append(Cost).Append("\n");
            sb.Append("  BattleBoostActivated: ").Append(BattleBoostActivated).Append("\n");
            sb.Append("  UnlockedSkinIds: ").Append(UnlockedSkinIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}