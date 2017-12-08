using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PendingRosterInviteeDTO
    {
        [DataMember(Name = "inviteTime")]
        long InviteTime { get; set; }

        [DataMember(Name = "inviter")]
        ulong Inviter { get; set; }

        [DataMember(Name = "inviteeId")]
        ulong InviteeId { get; set; }

        [DataMember(Name = "inviteeState")]
        PendingRosterInviteeState InviteeState { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PendingRosterInviteeDTO {\n");
            sb.Append("  InviteTime: ").Append(InviteTime).Append("\n");
            sb.Append("  Inviter: ").Append(Inviter).Append("\n");
            sb.Append("  InviteeId: ").Append(InviteeId).Append("\n");
            sb.Append("  InviteeState: ").Append(InviteeState).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}