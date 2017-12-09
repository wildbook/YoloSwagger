using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubMemberLists
    {
        [DataMember(Name = "activeMembers")]
        public ClubMember[] ActiveMembers { get; set; }

        [DataMember(Name = "invitedMembers")]
        public ClubMember[] InvitedMembers { get; set; }

        [DataMember(Name = "nominatedMembers")]
        public ClubMember[] NominatedMembers { get; set; }

        [DataMember(Name = "removedMembers")]
        public ClubMember[] RemovedMembers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubMemberLists {\n");
            sb.Append("  ActiveMembers: ").Append(ActiveMembers).Append("\n");
            sb.Append("  InvitedMembers: ").Append(InvitedMembers).Append("\n");
            sb.Append("  NominatedMembers: ").Append(NominatedMembers).Append("\n");
            sb.Append("  RemovedMembers: ").Append(RemovedMembers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}