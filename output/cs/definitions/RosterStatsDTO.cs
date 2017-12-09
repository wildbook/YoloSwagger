using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterStatsDTO
    {
        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "rosterLogo")]
        public int RosterLogo { get; set; }

        [DataMember(Name = "rosterLogoColor")]
        public int RosterLogoColor { get; set; }

        [DataMember(Name = "rosterName")]
        public string RosterName { get; set; }

        [DataMember(Name = "rosterShortName")]
        public string RosterShortName { get; set; }

        [DataMember(Name = "stats")]
        public RosterAggregatedStatsDTO Stats { get; set; }

        [DataMember(Name = "tier")]
        public int Tier { get; set; }

        [DataMember(Name = "tournamentNameLocKey")]
        public string TournamentNameLocKey { get; set; }

        [DataMember(Name = "tournamentPeriods")]
        public int TournamentPeriods { get; set; }

        [DataMember(Name = "tournamentThemeId")]
        public int TournamentThemeId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterStatsDTO {\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  RosterLogo: ").Append(RosterLogo).Append("\n");
            sb.Append("  RosterLogoColor: ").Append(RosterLogoColor).Append("\n");
            sb.Append("  RosterName: ").Append(RosterName).Append("\n");
            sb.Append("  RosterShortName: ").Append(RosterShortName).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentNameLocKey: ").Append(TournamentNameLocKey).Append("\n");
            sb.Append("  TournamentPeriods: ").Append(TournamentPeriods).Append("\n");
            sb.Append("  TournamentThemeId: ").Append(TournamentThemeId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}