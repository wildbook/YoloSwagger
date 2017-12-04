using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyInvitation {
    [DataMember(Name = "invitationMetaData")]
    dynamic InvitationMetaData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderLobbyInvitation {\n");
      sb.Append("  InvitationMetaData: ").Append(InvitationMetaData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}