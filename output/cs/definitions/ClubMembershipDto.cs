using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClubMembershipDto
    {
        [DataMember(Name = "invitedMembers")]
        MemberSinceDto[] InvitedMembers { get; set; }

        [DataMember(Name = "nominatedMembers")]
        MemberSinceDto[] NominatedMembers { get; set; }

        [DataMember(Name = "activeMembers")]
        MemberSinceDto[] ActiveMembers { get; set; }

        [DataMember(Name = "removedMembers")]
        MemberSinceDto[] RemovedMembers { get; set; }

        [DataMember(Name = "clubKey")]
        string ClubKey { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubMembershipDto {\n");
            sb.Append("  InvitedMembers: ").Append(InvitedMembers).Append("\n");
            sb.Append("  NominatedMembers: ").Append(NominatedMembers).Append("\n");
            sb.Append("  ActiveMembers: ").Append(ActiveMembers).Append("\n");
            sb.Append("  RemovedMembers: ").Append(RemovedMembers).Append("\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}