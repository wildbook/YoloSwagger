using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampionSelectStateV1
    {
        [DataMember(Name = "pickIntentClearedReason")]
        string PickIntentClearedReason { get; set; }

        [DataMember(Name = "allowOptingOutOfBanning")]
        bool AllowOptingOutOfBanning { get; set; }

        [DataMember(Name = "subphase")]
        string Subphase { get; set; }

        [DataMember(Name = "teamChatRoomId")]
        string TeamChatRoomId { get; set; }

        [DataMember(Name = "currentActionSetIndex")]
        int CurrentActionSetIndex { get; set; }

        [DataMember(Name = "cells")]
        LolLobbyTeamBuilderCellsV1 Cells { get; set; }

        [DataMember(Name = "trades")]
        LolLobbyTeamBuilderTradeV1[] Trades { get; set; }

        [DataMember(Name = "allowSkinSelection")]
        bool AllowSkinSelection { get; set; }

        [DataMember(Name = "currentTotalTimeMillis")]
        long CurrentTotalTimeMillis { get; set; }

        [DataMember(Name = "currentTimeRemainingMillis")]
        long CurrentTimeRemainingMillis { get; set; }

        [DataMember(Name = "teamId")]
        string TeamId { get; set; }

        [DataMember(Name = "rerollState")]
        LolLobbyTeamBuilderRerollStateV1 RerollState { get; set; }

        [DataMember(Name = "actionSetList")]
        dynamic[] ActionSetList { get; set; }

        [DataMember(Name = "localPlayerCellId")]
        int LocalPlayerCellId { get; set; }

        [DataMember(Name = "battleBoostState")]
        LolLobbyTeamBuilderTeamBuilderBoostInfo BattleBoostState { get; set; }

        [DataMember(Name = "ceremoniesByActionSetIndex")]
        Dictionary<string, dynamic> CeremoniesByActionSetIndex { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampionSelectStateV1 {\n");
            sb.Append("  PickIntentClearedReason: ").Append(PickIntentClearedReason).Append("\n");
            sb.Append("  AllowOptingOutOfBanning: ").Append(AllowOptingOutOfBanning).Append("\n");
            sb.Append("  Subphase: ").Append(Subphase).Append("\n");
            sb.Append("  TeamChatRoomId: ").Append(TeamChatRoomId).Append("\n");
            sb.Append("  CurrentActionSetIndex: ").Append(CurrentActionSetIndex).Append("\n");
            sb.Append("  Cells: ").Append(Cells).Append("\n");
            sb.Append("  Trades: ").Append(Trades).Append("\n");
            sb.Append("  AllowSkinSelection: ").Append(AllowSkinSelection).Append("\n");
            sb.Append("  CurrentTotalTimeMillis: ").Append(CurrentTotalTimeMillis).Append("\n");
            sb.Append("  CurrentTimeRemainingMillis: ").Append(CurrentTimeRemainingMillis).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  RerollState: ").Append(RerollState).Append("\n");
            sb.Append("  ActionSetList: ").Append(ActionSetList).Append("\n");
            sb.Append("  LocalPlayerCellId: ").Append(LocalPlayerCellId).Append("\n");
            sb.Append("  BattleBoostState: ").Append(BattleBoostState).Append("\n");
            sb.Append("  CeremoniesByActionSetIndex: ").Append(CeremoniesByActionSetIndex).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}