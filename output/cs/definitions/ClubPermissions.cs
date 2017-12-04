using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubPermissions {
    [DataMember(Name = "ADMIN")]
    string[] ADMIN {get; set;}

    [DataMember(Name = "UNKNOWN")]
    string[] UNKNOWN {get; set;}

    [DataMember(Name = "INVITEE")]
    string[] INVITEE {get; set;}

    [DataMember(Name = "MEMBER")]
    string[] MEMBER {get; set;}

    [DataMember(Name = "OFFICER")]
    string[] OFFICER {get; set;}

    [DataMember(Name = "OWNER")]
    string[] OWNER {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubPermissions {\n");
      sb.Append("  ADMIN: ").Append(ADMIN).Append("\n");
      sb.Append("  UNKNOWN: ").Append(UNKNOWN).Append("\n");
      sb.Append("  INVITEE: ").Append(INVITEE).Append("\n");
      sb.Append("  MEMBER: ").Append(MEMBER).Append("\n");
      sb.Append("  OFFICER: ").Append(OFFICER).Append("\n");
      sb.Append("  OWNER: ").Append(OWNER).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}