using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderChampionSelectStateV1
    {
        [DataMember(Name = "actionSetList")]
        public dynamic[] ActionSetList { get; set; }

        [DataMember(Name = "allowOptingOutOfBanning")]
        public bool AllowOptingOutOfBanning { get; set; }

        [DataMember(Name = "allowSkinSelection")]
        public bool AllowSkinSelection { get; set; }

        [DataMember(Name = "battleBoostState")]
        public LolLobbyTeamBuilderTeamBuilderBoostInfo BattleBoostState { get; set; }

        [DataMember(Name = "cells")]
        public LolLobbyTeamBuilderCellsV1 Cells { get; set; }

        [DataMember(Name = "ceremoniesByActionSetIndex")]
        public Dictionary<string, dynamic> CeremoniesByActionSetIndex { get; set; }

        [DataMember(Name = "currentActionSetIndex")]
        public int CurrentActionSetIndex { get; set; }

        [DataMember(Name = "currentTimeRemainingMillis")]
        public long CurrentTimeRemainingMillis { get; set; }

        [DataMember(Name = "currentTotalTimeMillis")]
        public long CurrentTotalTimeMillis { get; set; }

        [DataMember(Name = "localPlayerCellId")]
        public int LocalPlayerCellId { get; set; }

        [DataMember(Name = "pickIntentClearedReason")]
        public string PickIntentClearedReason { get; set; }

        [DataMember(Name = "rerollState")]
        public LolLobbyTeamBuilderRerollStateV1 RerollState { get; set; }

        [DataMember(Name = "subphase")]
        public string Subphase { get; set; }

        [DataMember(Name = "teamChatRoomId")]
        public string TeamChatRoomId { get; set; }

        [DataMember(Name = "teamId")]
        public string TeamId { get; set; }

        [DataMember(Name = "trades")]
        public LolLobbyTeamBuilderTradeV1[] Trades { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampionSelectStateV1 {\n");
            sb.Append("  ActionSetList: ").Append(ActionSetList).Append("\n");
            sb.Append("  AllowOptingOutOfBanning: ").Append(AllowOptingOutOfBanning).Append("\n");
            sb.Append("  AllowSkinSelection: ").Append(AllowSkinSelection).Append("\n");
            sb.Append("  BattleBoostState: ").Append(BattleBoostState).Append("\n");
            sb.Append("  Cells: ").Append(Cells).Append("\n");
            sb.Append("  CeremoniesByActionSetIndex: ").Append(CeremoniesByActionSetIndex).Append("\n");
            sb.Append("  CurrentActionSetIndex: ").Append(CurrentActionSetIndex).Append("\n");
            sb.Append("  CurrentTimeRemainingMillis: ").Append(CurrentTimeRemainingMillis).Append("\n");
            sb.Append("  CurrentTotalTimeMillis: ").Append(CurrentTotalTimeMillis).Append("\n");
            sb.Append("  LocalPlayerCellId: ").Append(LocalPlayerCellId).Append("\n");
            sb.Append("  PickIntentClearedReason: ").Append(PickIntentClearedReason).Append("\n");
            sb.Append("  RerollState: ").Append(RerollState).Append("\n");
            sb.Append("  Subphase: ").Append(Subphase).Append("\n");
            sb.Append("  TeamChatRoomId: ").Append(TeamChatRoomId).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  Trades: ").Append(Trades).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}