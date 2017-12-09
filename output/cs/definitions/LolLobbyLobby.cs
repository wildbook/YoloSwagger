using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobby
    {
        [DataMember(Name = "allowablePremadeSizes")]
        public int[] AllowablePremadeSizes { get; set; }

        [DataMember(Name = "autoFillEligible")]
        public bool AutoFillEligible { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        public bool AutoFillProtectedForPromos { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        public bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "canStartMatchmaking")]
        public bool CanStartMatchmaking { get; set; }

        [DataMember(Name = "chatRoomId")]
        public string ChatRoomId { get; set; }

        [DataMember(Name = "chatRoomKey")]
        public string ChatRoomKey { get; set; }

        [DataMember(Name = "customGameLobby")]
        public LolLobbyLobbyCustomGameLobby? CustomGameLobby { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "invitationId")]
        public string InvitationId { get; set; }

        [DataMember(Name = "invitations")]
        public LolLobbyLobbyInvitation[] Invitations { get; set; }

        [DataMember(Name = "isCustom")]
        public bool IsCustom { get; set; }

        [DataMember(Name = "isTeamBuilderManaged")]
        public bool IsTeamBuilderManaged { get; set; }

        [DataMember(Name = "localMember")]
        public LolLobbyLobbyMember LocalMember { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "maximumParticipantListSize")]
        public uint MaximumParticipantListSize { get; set; }

        [DataMember(Name = "members")]
        public LolLobbyLobbyMember[] Members { get; set; }

        [DataMember(Name = "premadeSizeAllowed")]
        public bool PremadeSizeAllowed { get; set; }

        [DataMember(Name = "queueAvailability")]
        public LolLobbyQueueAvailability QueueAvailability { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "removalReason")]
        public LolLobbyLobbyRemovedFromGameReason RemovalReason { get; set; }

        [DataMember(Name = "requiredPositionCoverageMet")]
        public bool RequiredPositionCoverageMet { get; set; }

        [DataMember(Name = "showPositionExcluder")]
        public bool ShowPositionExcluder { get; set; }

        [DataMember(Name = "showPositionSelector")]
        public bool ShowPositionSelector { get; set; }

        [DataMember(Name = "specifiablePositionPreferences")]
        public string[] SpecifiablePositionPreferences { get; set; }

        [DataMember(Name = "wasKicked")]
        public bool WasKicked { get; set; }

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