using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectLegacyChampSelectSession
    {
        [DataMember(Name = "actions")]
        public dynamic[] Actions { get; set; }

        [DataMember(Name = "allowBattleBoost")]
        public bool AllowBattleBoost { get; set; }

        [DataMember(Name = "allowRerolling")]
        public bool AllowRerolling { get; set; }

        [DataMember(Name = "allowSkinSelection")]
        public bool AllowSkinSelection { get; set; }

        [DataMember(Name = "bans")]
        public LolChampSelectLegacyChampSelectBannedChampions Bans { get; set; }

        [DataMember(Name = "chatDetails")]
        public LolChampSelectLegacyChampSelectChatRoomDetails ChatDetails { get; set; }

        [DataMember(Name = "isSpectating")]
        public bool IsSpectating { get; set; }

        [DataMember(Name = "localPlayerCellId")]
        public long LocalPlayerCellId { get; set; }

        [DataMember(Name = "myTeam")]
        public LolChampSelectLegacyChampSelectPlayerSelection[] MyTeam { get; set; }

        [DataMember(Name = "rerollsRemaining")]
        public uint RerollsRemaining { get; set; }

        [DataMember(Name = "theirTeam")]
        public LolChampSelectLegacyChampSelectPlayerSelection[] TheirTeam { get; set; }

        [DataMember(Name = "timer")]
        public LolChampSelectLegacyChampSelectTimer Timer { get; set; }

        [DataMember(Name = "trades")]
        public LolChampSelectLegacyChampSelectTradeContract[] Trades { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyChampSelectSession {\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  AllowBattleBoost: ").Append(AllowBattleBoost).Append("\n");
            sb.Append("  AllowRerolling: ").Append(AllowRerolling).Append("\n");
            sb.Append("  AllowSkinSelection: ").Append(AllowSkinSelection).Append("\n");
            sb.Append("  Bans: ").Append(Bans).Append("\n");
            sb.Append("  ChatDetails: ").Append(ChatDetails).Append("\n");
            sb.Append("  IsSpectating: ").Append(IsSpectating).Append("\n");
            sb.Append("  LocalPlayerCellId: ").Append(LocalPlayerCellId).Append("\n");
            sb.Append("  MyTeam: ").Append(MyTeam).Append("\n");
            sb.Append("  RerollsRemaining: ").Append(RerollsRemaining).Append("\n");
            sb.Append("  TheirTeam: ").Append(TheirTeam).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("  Trades: ").Append(Trades).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}