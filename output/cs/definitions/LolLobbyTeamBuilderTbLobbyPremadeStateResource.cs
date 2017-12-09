using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTbLobbyPremadeStateResource
    {
        [DataMember(Name = "autoFillEligible")]
        public bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        public bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        public bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "backwardsToPremadeTransitionReason")]
        public LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource BackwardsToPremadeTransitionReason { get; set; }

        [DataMember(Name = "captainSlotId")]
        public int CaptainSlotId { get; set; }

        [DataMember(Name = "draftPremadeId")]
        public string DraftPremadeId { get; set; }

        [DataMember(Name = "draftSlots")]
        public LolLobbyTeamBuilderTbLobbySlotResource[] DraftSlots { get; set; }

        [DataMember(Name = "localPlayerSlotId")]
        public int LocalPlayerSlotId { get; set; }

        [DataMember(Name = "playableDraftPositions")]
        public string[] PlayableDraftPositions { get; set; }

        [DataMember(Name = "premadeChatRoomId")]
        public string PremadeChatRoomId { get; set; }

        [DataMember(Name = "readyState")]
        public LolLobbyTeamBuilderReadyStateV1 ReadyState { get; set; }

        [DataMember(Name = "readyToMatchmake")]
        public bool ReadyToMatchmake { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        public bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "showPositionSelector")]
        public bool ShowPositionSelector { get; set; }

        [DataMember(Name = "timer")]
        public long Timer { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbLobbyPremadeStateResource {\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  BackwardsToPremadeTransitionReason: ").Append(BackwardsToPremadeTransitionReason).Append("\n");
            sb.Append("  CaptainSlotId: ").Append(CaptainSlotId).Append("\n");
            sb.Append("  DraftPremadeId: ").Append(DraftPremadeId).Append("\n");
            sb.Append("  DraftSlots: ").Append(DraftSlots).Append("\n");
            sb.Append("  LocalPlayerSlotId: ").Append(LocalPlayerSlotId).Append("\n");
            sb.Append("  PlayableDraftPositions: ").Append(PlayableDraftPositions).Append("\n");
            sb.Append("  PremadeChatRoomId: ").Append(PremadeChatRoomId).Append("\n");
            sb.Append("  ReadyState: ").Append(ReadyState).Append("\n");
            sb.Append("  ReadyToMatchmake: ").Append(ReadyToMatchmake).Append("\n");
            sb.Append("  ShowPositionExcluder: ").Append(ShowPositionExcluder).Append("\n");
            sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}