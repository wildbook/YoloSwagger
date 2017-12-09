using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerMembershipDto
    {
        [DataMember(Name = "activeClubs")]
        public ClubDto[] ActiveClubs { get; set; }

        [DataMember(Name = "clubsServerConfig")]
        public ClubsServerConfigDto ClubsServerConfig { get; set; }

        [DataMember(Name = "pendingInvites")]
        public MembershipInviteDto[] PendingInvites { get; set; }

        [DataMember(Name = "player")]
        public PlayerInfoDto Player { get; set; }

        [DataMember(Name = "playerClubPreferences")]
        public PlayerMembershipPreferencesDto PlayerClubPreferences { get; set; }

        [DataMember(Name = "removedClubs")]
        public ClubReferenceDto[] RemovedClubs { get; set; }

        [DataMember(Name = "resourceUri")]
        public string ResourceUri { get; set; }

        [DataMember(Name = "revokedInviteClubs")]
        public ClubReferenceDto[] RevokedInviteClubs { get; set; }

        [DataMember(Name = "secureClubPresenceInfoString")]
        public string SecureClubPresenceInfoString { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMembershipDto {\n");
            sb.Append("  ActiveClubs: ").Append(ActiveClubs).Append("\n");
            sb.Append("  ClubsServerConfig: ").Append(ClubsServerConfig).Append("\n");
            sb.Append("  PendingInvites: ").Append(PendingInvites).Append("\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  PlayerClubPreferences: ").Append(PlayerClubPreferences).Append("\n");
            sb.Append("  RemovedClubs: ").Append(RemovedClubs).Append("\n");
            sb.Append("  ResourceUri: ").Append(ResourceUri).Append("\n");
            sb.Append("  RevokedInviteClubs: ").Append(RevokedInviteClubs).Append("\n");
            sb.Append("  SecureClubPresenceInfoString: ").Append(SecureClubPresenceInfoString).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}