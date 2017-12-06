using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerMembershipPreferencesDto
    {
        [DataMember(Name = "primaryActiveClubKey")]
        string PrimaryActiveClubKey { get; set; }

        [DataMember(Name = "shareClubAffiliation")]
        bool ShareClubAffiliation { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMembershipPreferencesDto {\n");
            sb.Append("  PrimaryActiveClubKey: ").Append(PrimaryActiveClubKey).Append("\n");
            sb.Append("  ShareClubAffiliation: ").Append(ShareClubAffiliation).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}