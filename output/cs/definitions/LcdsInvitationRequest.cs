using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsInvitationRequest {
    [DataMember(Name = "inviteType")]
    string InviteType {get; set;}

    [DataMember(Name = "invitationState")]
    LcdsInvitationState InvitationState {get; set;}

    [DataMember(Name = "invitePayload")]
    string InvitePayload {get; set;}

    [DataMember(Name = "gameMetaData")]
    string GameMetaData {get; set;}

    [DataMember(Name = "invitationId")]
    string InvitationId {get; set;}

    [DataMember(Name = "owner")]
    LcdsPlayer Owner {get; set;}

    [DataMember(Name = "inviter")]
    LcdsInviter Inviter {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsInvitationRequest {\n");
      sb.Append("  InviteType: ").Append(InviteType).Append("\n");
      sb.Append("  InvitationState: ").Append(InvitationState).Append("\n");
      sb.Append("  InvitePayload: ").Append(InvitePayload).Append("\n");
      sb.Append("  GameMetaData: ").Append(GameMetaData).Append("\n");
      sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
      sb.Append("  Owner: ").Append(Owner).Append("\n");
      sb.Append("  Inviter: ").Append(Inviter).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}