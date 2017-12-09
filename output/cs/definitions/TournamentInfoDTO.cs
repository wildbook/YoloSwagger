using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TournamentInfoDTO
    {
        [DataMember(Name = "inviteePendingRosters")]
        public PendingRosterDTO[] InviteePendingRosters { get; set; }

        [DataMember(Name = "pendingRoster")]
        public PendingRosterDTO? PendingRoster { get; set; }

        [DataMember(Name = "roster")]
        public RosterDTO? Roster { get; set; }

        [DataMember(Name = "themeVp")]
        public int ThemeVp { get; set; }

        [DataMember(Name = "tournament")]
        public TournamentDTO Tournament { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TournamentInfoDTO {\n");
            sb.Append("  InviteePendingRosters: ").Append(InviteePendingRosters).Append("\n");
            sb.Append("  PendingRoster: ").Append(PendingRoster).Append("\n");
            sb.Append("  Roster: ").Append(Roster).Append("\n");
            sb.Append("  ThemeVp: ").Append(ThemeVp).Append("\n");
            sb.Append("  Tournament: ").Append(Tournament).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}