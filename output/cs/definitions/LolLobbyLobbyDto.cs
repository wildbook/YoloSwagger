using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyDto
    {
        [DataMember(Name = "canStartActivity")]
        public bool CanStartActivity { get; set; }

        [DataMember(Name = "chatRoomId")]
        public string ChatRoomId { get; set; }

        [DataMember(Name = "chatRoomKey")]
        public string ChatRoomKey { get; set; }

        [DataMember(Name = "gameConfig")]
        public LolLobbyLobbyGameConfigDto GameConfig { get; set; }

        [DataMember(Name = "invitations")]
        public LolLobbyLobbyInvitationDto[] Invitations { get; set; }

        [DataMember(Name = "localMember")]
        public LolLobbyLobbyParticipantDto LocalMember { get; set; }

        [DataMember(Name = "members")]
        public LolLobbyLobbyParticipantDto[] Members { get; set; }

        [DataMember(Name = "partyId")]
        public string PartyId { get; set; }

        [DataMember(Name = "restrictions")]
        public LolLobbyEligibilityRestriction[] Restrictions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyDto {\n");
            sb.Append("  CanStartActivity: ").Append(CanStartActivity).Append("\n");
            sb.Append("  ChatRoomId: ").Append(ChatRoomId).Append("\n");
            sb.Append("  ChatRoomKey: ").Append(ChatRoomKey).Append("\n");
            sb.Append("  GameConfig: ").Append(GameConfig).Append("\n");
            sb.Append("  Invitations: ").Append(Invitations).Append("\n");
            sb.Append("  LocalMember: ").Append(LocalMember).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  PartyId: ").Append(PartyId).Append("\n");
            sb.Append("  Restrictions: ").Append(Restrictions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}