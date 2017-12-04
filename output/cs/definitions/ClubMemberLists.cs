using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubMemberLists {
    [DataMember(Name = "invitedMembers")]
    ClubMember[] InvitedMembers {get; set;}

    [DataMember(Name = "nominatedMembers")]
    ClubMember[] NominatedMembers {get; set;}

    [DataMember(Name = "activeMembers")]
    ClubMember[] ActiveMembers {get; set;}

    [DataMember(Name = "removedMembers")]
    ClubMember[] RemovedMembers {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubMemberLists {\n");
      sb.Append("  InvitedMembers: ").Append(InvitedMembers).Append("\n");
      sb.Append("  NominatedMembers: ").Append(NominatedMembers).Append("\n");
      sb.Append("  ActiveMembers: ").Append(ActiveMembers).Append("\n");
      sb.Append("  RemovedMembers: ").Append(RemovedMembers).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}