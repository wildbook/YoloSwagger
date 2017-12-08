using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampSelectSession
    {
        [DataMember(Name = "theirTeam")]
        LolLobbyTeamBuilderChampSelectPlayerSelection[] TheirTeam { get; set; }

        [DataMember(Name = "rerollsRemaining")]
        uint RerollsRemaining { get; set; }

        [DataMember(Name = "allowBattleBoost")]
        bool AllowBattleBoost { get; set; }

        [DataMember(Name = "trades")]
        LolLobbyTeamBuilderChampSelectTradeContract[] Trades { get; set; }

        [DataMember(Name = "allowSkinSelection")]
        bool AllowSkinSelection { get; set; }

        [DataMember(Name = "allowRerolling")]
        bool AllowRerolling { get; set; }

        [DataMember(Name = "actions")]
        dynamic[] Actions { get; set; }

        [DataMember(Name = "chatDetails")]
        LolLobbyTeamBuilderChampSelectChatRoomDetails ChatDetails { get; set; }

        [DataMember(Name = "timer")]
        LolLobbyTeamBuilderChampSelectTimer Timer { get; set; }

        [DataMember(Name = "myTeam")]
        LolLobbyTeamBuilderChampSelectPlayerSelection[] MyTeam { get; set; }

        [DataMember(Name = "localPlayerCellId")]
        long LocalPlayerCellId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampSelectSession {\n");
            sb.Append("  TheirTeam: ").Append(TheirTeam).Append("\n");
            sb.Append("  RerollsRemaining: ").Append(RerollsRemaining).Append("\n");
            sb.Append("  AllowBattleBoost: ").Append(AllowBattleBoost).Append("\n");
            sb.Append("  Trades: ").Append(Trades).Append("\n");
            sb.Append("  AllowSkinSelection: ").Append(AllowSkinSelection).Append("\n");
            sb.Append("  AllowRerolling: ").Append(AllowRerolling).Append("\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  ChatDetails: ").Append(ChatDetails).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("  MyTeam: ").Append(MyTeam).Append("\n");
            sb.Append("  LocalPlayerCellId: ").Append(LocalPlayerCellId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}