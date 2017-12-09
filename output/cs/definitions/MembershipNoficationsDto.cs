using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MembershipNoficationsDto
    {
        [DataMember(Name = "action")]
        public string Action { get; set; }

        [DataMember(Name = "clubKey")]
        public string ClubKey { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "role")]
        public string Role { get; set; }

        [DataMember(Name = "status")]
        public string Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MembershipNoficationsDto {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}