using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTeamBuilderBoostInfo
    {
        [DataMember(Name = "activatorCellId")]
        public long ActivatorCellId { get; set; }

        [DataMember(Name = "allowBattleBoost")]
        public bool AllowBattleBoost { get; set; }

        [DataMember(Name = "battleBoostActivated")]
        public bool BattleBoostActivated { get; set; }

        [DataMember(Name = "cost")]
        public long Cost { get; set; }

        [DataMember(Name = "unlockedSkinIds")]
        public long[] UnlockedSkinIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTeamBuilderBoostInfo {\n");
            sb.Append("  ActivatorCellId: ").Append(ActivatorCellId).Append("\n");
            sb.Append("  AllowBattleBoost: ").Append(AllowBattleBoost).Append("\n");
            sb.Append("  BattleBoostActivated: ").Append(BattleBoostActivated).Append("\n");
            sb.Append("  Cost: ").Append(Cost).Append("\n");
            sb.Append("  UnlockedSkinIds: ").Append(UnlockedSkinIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}