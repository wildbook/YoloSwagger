using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyReceivedInvitationDto
    {
        [DataMember(Name = "canAcceptInvitation")]
        public bool CanAcceptInvitation { get; set; }

        [DataMember(Name = "fromSummonerId")]
        public ulong FromSummonerId { get; set; }

        [DataMember(Name = "fromSummonerName")]
        public string FromSummonerName { get; set; }

        [DataMember(Name = "gameConfig")]
        public LolLobbyReceivedInvitationGameConfigDto GameConfig { get; set; }

        [DataMember(Name = "invitationId")]
        public string InvitationId { get; set; }

        [DataMember(Name = "restrictions")]
        public LolLobbyEligibilityRestriction[] Restrictions { get; set; }

        [DataMember(Name = "state")]
        public LolLobbyLobbyInvitationState State { get; set; }

        [DataMember(Name = "timestamp")]
        public string Timestamp { get; set; }

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