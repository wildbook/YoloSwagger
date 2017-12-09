using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PendingRosterInviteeDTO
    {
        [DataMember(Name = "inviteTime")]
        public long InviteTime { get; set; }

        [DataMember(Name = "inviteeId")]
        public ulong InviteeId { get; set; }

        [DataMember(Name = "inviteeState")]
        public PendingRosterInviteeState InviteeState { get; set; }

        [DataMember(Name = "inviter")]
        public ulong Inviter { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PendingRosterInviteeDTO {\n");
            sb.Append("  InviteTime: ").Append(InviteTime).Append("\n");
            sb.Append("  InviteeId: ").Append(InviteeId).Append("\n");
            sb.Append("  InviteeState: ").Append(InviteeState).Append("\n");
            sb.Append("  Inviter: ").Append(Inviter).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}