using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerMembershipDto
    {
        [DataMember(Name = "resourceUri")]
        string ResourceUri { get; set; }

        [DataMember(Name = "playerClubPreferences")]
        PlayerMembershipPreferencesDto PlayerClubPreferences { get; set; }

        [DataMember(Name = "revokedInviteClubs")]
        ClubReferenceDto[] RevokedInviteClubs { get; set; }

        [DataMember(Name = "removedClubs")]
        ClubReferenceDto[] RemovedClubs { get; set; }

        [DataMember(Name = "pendingInvites")]
        MembershipInviteDto[] PendingInvites { get; set; }

        [DataMember(Name = "player")]
        PlayerInfoDto Player { get; set; }

        [DataMember(Name = "secureClubPresenceInfoString")]
        string SecureClubPresenceInfoString { get; set; }

        [DataMember(Name = "clubsServerConfig")]
        ClubsServerConfigDto ClubsServerConfig { get; set; }

        [DataMember(Name = "activeClubs")]
        ClubDto[] ActiveClubs { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMembershipDto {\n");
            sb.Append("  ResourceUri: ").Append(ResourceUri).Append("\n");
            sb.Append("  PlayerClubPreferences: ").Append(PlayerClubPreferences).Append("\n");
            sb.Append("  RevokedInviteClubs: ").Append(RevokedInviteClubs).Append("\n");
            sb.Append("  RemovedClubs: ").Append(RemovedClubs).Append("\n");
            sb.Append("  PendingInvites: ").Append(PendingInvites).Append("\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  SecureClubPresenceInfoString: ").Append(SecureClubPresenceInfoString).Append("\n");
            sb.Append("  ClubsServerConfig: ").Append(ClubsServerConfig).Append("\n");
            sb.Append("  ActiveClubs: ").Append(ActiveClubs).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}