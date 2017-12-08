using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClubsPublicPlayerClubMembership
    {
        [DataMember(Name = "info")]
        LolClubsPublicClubPlayer Info { get; set; }

        [DataMember(Name = "secureClubPresenceInfoString")]
        string SecureClubPresenceInfoString { get; set; }

        [DataMember(Name = "preferences")]
        LolClubsPublicClubPreferences Preferences { get; set; }

        [DataMember(Name = "activeClubs")]
        LolClubsPublicPlayerClub[] ActiveClubs { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicPlayerClubMembership {\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  SecureClubPresenceInfoString: ").Append(SecureClubPresenceInfoString).Append("\n");
            sb.Append("  Preferences: ").Append(Preferences).Append("\n");
            sb.Append("  ActiveClubs: ").Append(ActiveClubs).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}