using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MembershipInviteDto
    {
        [DataMember(Name = "clubKey")]
        public string ClubKey { get; set; }

        [DataMember(Name = "clubName")]
        public string ClubName { get; set; }

        [DataMember(Name = "inviteeAccountId")]
        public ulong InviteeAccountId { get; set; }

        [DataMember(Name = "inviteePlatformId")]
        public string InviteePlatformId { get; set; }

        [DataMember(Name = "inviteeSummonerId")]
        public ulong InviteeSummonerId { get; set; }

        [DataMember(Name = "inviterAccountId")]
        public ulong InviterAccountId { get; set; }

        [DataMember(Name = "inviterPlatformId")]
        public string InviterPlatformId { get; set; }

        [DataMember(Name = "inviterSummonerId")]
        public ulong InviterSummonerId { get; set; }

        [DataMember(Name = "status")]
        public int Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MembershipInviteDto {\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("  ClubName: ").Append(ClubName).Append("\n");
            sb.Append("  InviteeAccountId: ").Append(InviteeAccountId).Append("\n");
            sb.Append("  InviteePlatformId: ").Append(InviteePlatformId).Append("\n");
            sb.Append("  InviteeSummonerId: ").Append(InviteeSummonerId).Append("\n");
            sb.Append("  InviterAccountId: ").Append(InviterAccountId).Append("\n");
            sb.Append("  InviterPlatformId: ").Append(InviterPlatformId).Append("\n");
            sb.Append("  InviterSummonerId: ").Append(InviterSummonerId).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}