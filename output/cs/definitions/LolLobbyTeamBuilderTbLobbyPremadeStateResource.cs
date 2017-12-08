using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderTbLobbyPremadeStateResource
    {
        [DataMember(Name = "localPlayerSlotId")]
        int LocalPlayerSlotId { get; set; }

        [DataMember(Name = "readyState")]
        LolLobbyTeamBuilderReadyStateV1 ReadyState { get; set; }

        [DataMember(Name = "draftSlots")]
        LolLobbyTeamBuilderTbLobbySlotResource[] DraftSlots { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillEligible")]
        bool AutoFillEligible { get; set; }

        [DataMember(Name = "captainSlotId")]
        int CaptainSlotId { get; set; }

        [DataMember(Name = "readyToMatchmake")]
        bool ReadyToMatchmake { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "showPositionSelector")]
        bool ShowPositionSelector { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "timer")]
        long Timer { get; set; }

        [DataMember(Name = "draftPremadeId")]
        string DraftPremadeId { get; set; }

        [DataMember(Name = "backwardsToPremadeTransitionReason")]
        LolLobbyTeamBuilderTbLobbyBackwardsToPremadeTransitionResource BackwardsToPremadeTransitionReason { get; set; }

        [DataMember(Name = "premadeChatRoomId")]
        string PremadeChatRoomId { get; set; }

        [DataMember(Name = "playableDraftPositions")]
        string[] PlayableDraftPositions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbLobbyPremadeStateResource {\n");
            sb.Append("  LocalPlayerSlotId: ").Append(LocalPlayerSlotId).Append("\n");
            sb.Append("  ReadyState: ").Append(ReadyState).Append("\n");
            sb.Append("  DraftSlots: ").Append(DraftSlots).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  CaptainSlotId: ").Append(CaptainSlotId).Append("\n");
            sb.Append("  ReadyToMatchmake: ").Append(ReadyToMatchmake).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
            sb.Append("  ShowPositionExcluder: ").Append(ShowPositionExcluder).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("  DraftPremadeId: ").Append(DraftPremadeId).Append("\n");
            sb.Append("  BackwardsToPremadeTransitionReason: ").Append(BackwardsToPremadeTransitionReason).Append("\n");
            sb.Append("  PremadeChatRoomId: ").Append(PremadeChatRoomId).Append("\n");
            sb.Append("  PlayableDraftPositions: ").Append(PlayableDraftPositions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}