using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerClubMembership
    {
        [DataMember(Name = "activeClubs")]
        PlayerClub[] ActiveClubs { get; set; }

        [DataMember(Name = "clubsServerConfig")]
        ClubsConfig ClubsServerConfig { get; set; }

        [DataMember(Name = "info")]
        ClubPlayer Info { get; set; }

        [DataMember(Name = "pendingInvites")]
        ClubInvite[] PendingInvites { get; set; }

        [DataMember(Name = "preferences")]
        ClubPreferences Preferences { get; set; }

        [DataMember(Name = "removedClubs")]
        Club[] RemovedClubs { get; set; }

        [DataMember(Name = "revokedInviteClubs")]
        Club[] RevokedInviteClubs { get; set; }

        [DataMember(Name = "secureClubPresenceInfoString")]
        string SecureClubPresenceInfoString { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerClubMembership {\n");
            sb.Append("  ActiveClubs: ").Append(ActiveClubs).Append("\n");
            sb.Append("  ClubsServerConfig: ").Append(ClubsServerConfig).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  PendingInvites: ").Append(PendingInvites).Append("\n");
            sb.Append("  Preferences: ").Append(Preferences).Append("\n");
            sb.Append("  RemovedClubs: ").Append(RemovedClubs).Append("\n");
            sb.Append("  RevokedInviteClubs: ").Append(RevokedInviteClubs).Append("\n");
            sb.Append("  SecureClubPresenceInfoString: ").Append(SecureClubPresenceInfoString).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}