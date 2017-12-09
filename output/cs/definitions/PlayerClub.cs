using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerClub
    {
        [DataMember(Name = "created")]
        public long Created { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "isClubTagEligible")]
        public bool IsClubTagEligible { get; set; }

        [DataMember(Name = "jid")]
        public string Jid { get; set; }

        [DataMember(Name = "key")]
        public string Key { get; set; }

        [DataMember(Name = "lastModified")]
        public long LastModified { get; set; }

        [DataMember(Name = "members")]
        public ClubMemberLists Members { get; set; }

        [DataMember(Name = "motd")]
        public string Motd { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "owner")]
        public ClubMember Owner { get; set; }

        [DataMember(Name = "permissions")]
        public ClubPermissions Permissions { get; set; }

        [DataMember(Name = "primary")]
        public bool Primary { get; set; }

        [DataMember(Name = "role")]
        public ClubRole Role { get; set; }

        [DataMember(Name = "tag")]
        public string Tag { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerClub {\n");
            sb.Append("  Created: ").Append(Created).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  IsClubTagEligible: ").Append(IsClubTagEligible).Append("\n");
            sb.Append("  Jid: ").Append(Jid).Append("\n");
            sb.Append("  Key: ").Append(Key).Append("\n");
            sb.Append("  LastModified: ").Append(LastModified).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Motd: ").Append(Motd).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  Permissions: ").Append(Permissions).Append("\n");
            sb.Append("  Primary: ").Append(Primary).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Tag: ").Append(Tag).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}