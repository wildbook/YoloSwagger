using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobby
    {
        [DataMember(Name = "allowablePremadeSizes")]
        int[] AllowablePremadeSizes { get; set; }

        [DataMember(Name = "autoFillEligible")]
        bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "canStartMatchmaking")]
        bool CanStartMatchmaking { get; set; }

        [DataMember(Name = "chatRoomId")]
        string ChatRoomId { get; set; }

        [DataMember(Name = "chatRoomKey")]
        string ChatRoomKey { get; set; }

        [DataMember(Name = "customGameLobby")]
        LolLobbyLobbyCustomGameLobby? CustomGameLobby { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "invitationId")]
        string InvitationId { get; set; }

        [DataMember(Name = "invitations")]
        LolLobbyLobbyInvitation[] Invitations { get; set; }

        [DataMember(Name = "isCustom")]
        bool IsCustom { get; set; }

        [DataMember(Name = "isTeamBuilderManaged")]
        bool IsTeamBuilderManaged { get; set; }

        [DataMember(Name = "localMember")]
        LolLobbyLobbyMember LocalMember { get; set; }

        [DataMember(Name = "mapId")]
        int MapId { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        uint MaximumParticipantListSize { get; set; }

        [DataMember(Name = "members")]
        LolLobbyLobbyMember[] Members { get; set; }

        [DataMember(Name = "premadeSizeAllowed")]
        bool PremadeSizeAllowed { get; set; }

        [DataMember(Name = "queueAvailability")]
        LolLobbyQueueAvailability QueueAvailability { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "removalReason")]
        LolLobbyLobbyRemovedFromGameReason RemovalReason { get; set; }

        [DataMember(Name = "requiredPositionCoverageMet")]
        bool RequiredPositionCoverageMet { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "showPositionSelector")]
        bool ShowPositionSelector { get; set; }

        [DataMember(Name = "specifiablePositionPreferences")]
        string[] SpecifiablePositionPreferences { get; set; }

        [DataMember(Name = "wasKicked")]
        bool WasKicked { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobby {\n");
            sb.Append("  AllowablePremadeSizes: ").Append(AllowablePremadeSizes).Append("\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  CanStartMatchmaking: ").Append(CanStartMatchmaking).Append("\n");
            sb.Append("  ChatRoomId: ").Append(ChatRoomId).Append("\n");
            sb.Append("  ChatRoomKey: ").Append(ChatRoomKey).Append("\n");
            sb.Append("  CustomGameLobby: ").Append(CustomGameLobby).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  Invitations: ").Append(Invitations).Append("\n");
            sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
            sb.Append("  IsTeamBuilderManaged: ").Append(IsTeamBuilderManaged).Append("\n");
            sb.Append("  LocalMember: ").Append(LocalMember).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  MaximumParticipantListSize: ").Append(MaximumParticipantListSize).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  PremadeSizeAllowed: ").Append(PremadeSizeAllowed).Append("\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  RemovalReason: ").Append(RemovalReason).Append("\n");
            sb.Append("  RequiredPositionCoverageMet: ").Append(RequiredPositionCoverageMet).Append("\n");
            sb.Append("  ShowPositionExcluder: ").Append(ShowPositionExcluder).Append("\n");
            sb.Append("  ShowPositionSelector: ").Append(ShowPositionSelector).Append("\n");
            sb.Append("  SpecifiablePositionPreferences: ").Append(SpecifiablePositionPreferences).Append("\n");
            sb.Append("  WasKicked: ").Append(WasKicked).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}