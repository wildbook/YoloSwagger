using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubReferenceDto
    {
        [DataMember(Name = "clubKey")]
        public string ClubKey { get; set; }

        [DataMember(Name = "clubName")]
        public string ClubName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubReferenceDto {\n");
            sb.Append("  ClubKey: ").Append(ClubKey).Append("\n");
            sb.Append("  ClubName: ").Append(ClubName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}