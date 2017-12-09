using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubMembershipDto
    {
        [DataMember(Name = "activeMembers")]
        public MemberSinceDto[] ActiveMembers { get; set; }

        [DataMember(Name = "clubKey")]
        public string ClubKey { get; set; }

        [DataMember(Name = "invitedMembers")]
        public MemberSinceDto[] InvitedMembers { get; set; }

        [DataMember(Name = "nominatedMembers")]
        public MemberSinceDto[] NominatedMembers { get; set; }

        [DataMember(Name = "removedMembers")]
        public MemberSinceDto[] RemovedMembers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubMembershipDto {\n");
            sb.Append("  ActiveMembers: ").Append(ActiveMembers).Append("\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("  InvitedMembers: ").Append(InvitedMembers).Append("\n");
            sb.Append("  NominatedMembers: ").Append(NominatedMembers).Append("\n");
            sb.Append("  RemovedMembers: ").Append(RemovedMembers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}