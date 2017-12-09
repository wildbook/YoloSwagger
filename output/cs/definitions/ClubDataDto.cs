using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubDataDto
    {
        [DataMember(Name = "clubKey")]
        public string ClubKey { get; set; }

        [DataMember(Name = "createdTs")]
        public long CreatedTs { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "jid")]
        public string Jid { get; set; }

        [DataMember(Name = "lastModifiedTs")]
        public long LastModifiedTs { get; set; }

        [DataMember(Name = "motd")]
        public string Motd { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "permissionMap")]
        public ClubPermissions PermissionMap { get; set; }

        [DataMember(Name = "role")]
        public string Role { get; set; }

        [DataMember(Name = "tag")]
        public string Tag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubDataDto {\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("  CreatedTs: ").Append(CreatedTs).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Jid: ").Append(Jid).Append("\n");
            sb.Append("  LastModifiedTs: ").Append(LastModifiedTs).Append("\n");
            sb.Append("  Motd: ").Append(Motd).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PermissionMap: ").Append(PermissionMap).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}