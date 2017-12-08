using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MembershipNoficationsDto
    {
        [DataMember(Name = "action")]
        string Action { get; set; }

        [DataMember(Name = "status")]
        string Status { get; set; }

        [DataMember(Name = "role")]
        string Role { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "clubKey")]
        string ClubKey { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MembershipNoficationsDto {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}