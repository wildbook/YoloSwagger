using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyReceivedInvitationDto
    {
        [DataMember(Name = "canAcceptInvitation")]
        bool CanAcceptInvitation { get; set; }

        [DataMember(Name = "fromSummonerId")]
        ulong FromSummonerId { get; set; }

        [DataMember(Name = "fromSummonerName")]
        string FromSummonerName { get; set; }

        [DataMember(Name = "gameConfig")]
        LolLobbyReceivedInvitationGameConfigDto GameConfig { get; set; }

        [DataMember(Name = "invitationId")]
        string InvitationId { get; set; }

        [DataMember(Name = "restrictions")]
        LolLobbyEligibilityRestriction[] Restrictions { get; set; }

        [DataMember(Name = "state")]
        LolLobbyLobbyInvitationState State { get; set; }

        [DataMember(Name = "timestamp")]
        string Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyReceivedInvitationDto {\n");
            sb.Append("  CanAcceptInvitation: ").Append(CanAcceptInvitation).Append("\n");
            sb.Append("  FromSummonerId: ").Append(FromSummonerId).Append("\n");
            sb.Append("  FromSummonerName: ").Append(FromSummonerName).Append("\n");
            sb.Append("  GameConfig: ").Append(GameConfig).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  Restrictions: ").Append(Restrictions).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}