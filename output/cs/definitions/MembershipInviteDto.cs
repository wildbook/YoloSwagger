using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MembershipInviteDto {
    [DataMember(Name = "status")]
    int Status {get; set;}

    [DataMember(Name = "inviteeAccountId")]
    ulong InviteeAccountId {get; set;}

    [DataMember(Name = "inviterSummonerId")]
    ulong InviterSummonerId {get; set;}

    [DataMember(Name = "clubKey")]
    string ClubKey {get; set;}

    [DataMember(Name = "inviterPlatformId")]
    string InviterPlatformId {get; set;}

    [DataMember(Name = "inviteeSummonerId")]
    ulong InviteeSummonerId {get; set;}

    [DataMember(Name = "inviteePlatformId")]
    string InviteePlatformId {get; set;}

    [DataMember(Name = "clubName")]
    string ClubName {get; set;}

    [DataMember(Name = "inviterAccountId")]
    ulong InviterAccountId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MembershipInviteDto {\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  InviteeAccountId: ").Append(InviteeAccountId).Append("\n");
      sb.Append("  InviterSummonerId: ").Append(InviterSummonerId).Append("\n");
      sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
      sb.Append("  InviterPlatformId: ").Append(InviterPlatformId).Append("\n");
      sb.Append("  InviteeSummonerId: ").Append(InviteeSummonerId).Append("\n");
      sb.Append("  InviteePlatformId: ").Append(InviteePlatformId).Append("\n");
      sb.Append("  ClubName: ").Append(ClubName).Append("\n");
      sb.Append("  InviterAccountId: ").Append(InviterAccountId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}