using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubPermissions
    {
        [DataMember(Name = "ADMIN")]
        public string[] ADMIN { get; set; }

        [DataMember(Name = "INVITEE")]
        public string[] INVITEE { get; set; }

        [DataMember(Name = "MEMBER")]
        public string[] MEMBER { get; set; }

        [DataMember(Name = "OFFICER")]
        public string[] OFFICER { get; set; }

        [DataMember(Name = "OWNER")]
        public string[] OWNER { get; set; }

        [DataMember(Name = "UNKNOWN")]
        public string[] UNKNOWN { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubPermissions {\n");
            sb.Append("  ADMIN: ").Append(ADMIN).Append("\n");
            sb.Append("  INVITEE: ").Append(INVITEE).Append("\n");
            sb.Append("  MEMBER: ").Append(MEMBER).Append("\n");
            sb.Append("  OFFICER: ").Append(OFFICER).Append("\n");
            sb.Append("  OWNER: ").Append(OWNER).Append("\n");
            sb.Append("  UNKNOWN: ").Append(UNKNOWN).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}