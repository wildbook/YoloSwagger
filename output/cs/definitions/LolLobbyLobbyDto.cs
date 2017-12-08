using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLobbyDto
    {
        [DataMember(Name = "restrictions")]
        LolLobbyEligibilityRestriction[] Restrictions { get; set; }

        [DataMember(Name = "chatRoomKey")]
        string ChatRoomKey { get; set; }

        [DataMember(Name = "gameConfig")]
        LolLobbyLobbyGameConfigDto GameConfig { get; set; }

        [DataMember(Name = "invitations")]
        LolLobbyLobbyInvitationDto[] Invitations { get; set; }

        [DataMember(Name = "chatRoomId")]
        string ChatRoomId { get; set; }

        [DataMember(Name = "partyId")]
        string PartyId { get; set; }

        [DataMember(Name = "members")]
        LolLobbyLobbyParticipantDto[] Members { get; set; }

        [DataMember(Name = "localMember")]
        LolLobbyLobbyParticipantDto LocalMember { get; set; }

        [DataMember(Name = "canStartActivity")]
        bool CanStartActivity { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyDto {\n");
            sb.Append("  Restrictions: ").Append(Restrictions).Append("\n");
            sb.Append("  ChatRoomKey: ").Append(ChatRoomKey).Append("\n");
            sb.Append("  GameConfig: ").Append(GameConfig).Append("\n");
            sb.Append("  Invitations: ").Append(Invitations).Append("\n");
            sb.Append("  ChatRoomId: ").Append(ChatRoomId).Append("\n");
            sb.Append("  PartyId: ").Append(PartyId).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  LocalMember: ").Append(LocalMember).Append("\n");
            sb.Append("  CanStartActivity: ").Append(CanStartActivity).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}