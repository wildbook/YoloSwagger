using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyInvitationDto
    {
        [DataMember(Name = "invitationId")]
        public string InvitationId { get; set; }

        [DataMember(Name = "state")]
        public LolLobbyLobbyInvitationState State { get; set; }

        [DataMember(Name = "timestamp")]
        public string Timestamp { get; set; }

        [DataMember(Name = "toSummonerId")]
        public ulong ToSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyInvitationDto {\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  ToSummonerId: ").Append(ToSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}