using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClubDto
    {
        [DataMember(Name = "clubData")]
        ClubDataDto ClubData { get; set; }

        [DataMember(Name = "membership")]
        ClubMembershipDto Membership { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "resourceUri")]
        string ResourceUri { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubDto {\n");
            sb.Append("  ClubData: ").Append(ClubData).Append("\n");
            sb.Append("  Membership: ").Append(Membership).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  ResourceUri: ").Append(ResourceUri).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}