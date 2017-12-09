using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClubsPublicPlayerClubMembership
    {
        [DataMember(Name = "activeClubs")]
        public LolClubsPublicPlayerClub[] ActiveClubs { get; set; }

        [DataMember(Name = "info")]
        public LolClubsPublicClubPlayer Info { get; set; }

        [DataMember(Name = "preferences")]
        public LolClubsPublicClubPreferences Preferences { get; set; }

        [DataMember(Name = "secureClubPresenceInfoString")]
        public string SecureClubPresenceInfoString { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClubsPublicPlayerClubMembership {\n");
            sb.Append("  ActiveClubs: ").Append(ActiveClubs).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  Preferences: ").Append(Preferences).Append("\n");
            sb.Append("  SecureClubPresenceInfoString: ").Append(SecureClubPresenceInfoString).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}