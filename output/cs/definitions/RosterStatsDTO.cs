using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RosterStatsDTO
    {
        [DataMember(Name = "tournamentNameLocKey")]
        string TournamentNameLocKey { get; set; }

        [DataMember(Name = "stats")]
        RosterAggregatedStatsDTO Stats { get; set; }

        [DataMember(Name = "rosterLogo")]
        int RosterLogo { get; set; }

        [DataMember(Name = "rosterLogoColor")]
        int RosterLogoColor { get; set; }

        [DataMember(Name = "rosterId")]
        long RosterId { get; set; }

        [DataMember(Name = "tournamentPeriods")]
        int TournamentPeriods { get; set; }

        [DataMember(Name = "rosterName")]
        string RosterName { get; set; }

        [DataMember(Name = "rosterShortName")]
        string RosterShortName { get; set; }

        [DataMember(Name = "tier")]
        int Tier { get; set; }

        [DataMember(Name = "tournamentThemeId")]
        int TournamentThemeId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterStatsDTO {\n");
            sb.Append("  TournamentNameLocKey: ").Append(TournamentNameLocKey).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  RosterLogo: ").Append(RosterLogo).Append("\n");
            sb.Append("  RosterLogoColor: ").Append(RosterLogoColor).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  TournamentPeriods: ").Append(TournamentPeriods).Append("\n");
            sb.Append("  RosterName: ").Append(RosterName).Append("\n");
            sb.Append("  RosterShortName: ").Append(RosterShortName).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentThemeId: ").Append(TournamentThemeId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}