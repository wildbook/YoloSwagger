using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubDataDto {
    [DataMember(Name = "permissionMap")]
    ClubPermissions PermissionMap {get; set;}

    [DataMember(Name = "jid")]
    string Jid {get; set;}

    [DataMember(Name = "motd")]
    string Motd {get; set;}

    [DataMember(Name = "clubKey")]
    string ClubKey {get; set;}

    [DataMember(Name = "createdTs")]
    long CreatedTs {get; set;}

    [DataMember(Name = "lastModifiedTs")]
    long LastModifiedTs {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "tag")]
    string Tag {get; set;}

    [DataMember(Name = "role")]
    string Role {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubDataDto {\n");
      sb.Append("  PermissionMap: ").Append(PermissionMap).Append("\n");
      sb.Append("  Jid: ").Append(Jid).Append("\n");
      sb.Append("  Motd: ").Append(Motd).Append("\n");
      sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
      sb.Append("  CreatedTs: ").Append(CreatedTs).Append("\n");
      sb.Append("  LastModifiedTs: ").Append(LastModifiedTs).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      sb.Append("  Role: ").Append(Role).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}