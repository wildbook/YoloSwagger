using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsInvitationRequest
    {
        [DataMember(Name = "gameMetaData")]
        public string GameMetaData { get; set; }

        [DataMember(Name = "invitationId")]
        public string InvitationId { get; set; }

        [DataMember(Name = "invitationState")]
        public LcdsInvitationState InvitationState { get; set; }

        [DataMember(Name = "invitePayload")]
        public string InvitePayload { get; set; }

        [DataMember(Name = "inviteType")]
        public string InviteType { get; set; }

        [DataMember(Name = "inviter")]
        public LcdsInviter Inviter { get; set; }

        [DataMember(Name = "owner")]
        public LcdsPlayer Owner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsInvitationRequest {\n");
            sb.Append("  GameMetaData: ").Append(GameMetaData).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  InvitationState: ").Append(InvitationState).Append("\n");
            sb.Append("  InvitePayload: ").Append(InvitePayload).Append("\n");
            sb.Append("  InviteType: ").Append(InviteType).Append("\n");
            sb.Append("  Inviter: ").Append(Inviter).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}