using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRosterStats
    {
        [DataMember(Name = "rosterIconColorId")]
        int RosterIconColorId { get; set; }

        [DataMember(Name = "tournamentNameLocKey")]
        string TournamentNameLocKey { get; set; }

        [DataMember(Name = "rosterName")]
        string RosterName { get; set; }

        [DataMember(Name = "playerStats")]
        Dictionary<string, LolClashRosterPlayerAggregatedStats> PlayerStats { get; set; }

        [DataMember(Name = "tournamentPeriods")]
        int TournamentPeriods { get; set; }

        [DataMember(Name = "rosterId")]
        long RosterId { get; set; }

        [DataMember(Name = "rosterShortName")]
        string RosterShortName { get; set; }

        [DataMember(Name = "tier")]
        int Tier { get; set; }

        [DataMember(Name = "rosterIconId")]
        int RosterIconId { get; set; }

        [DataMember(Name = "tournamentThemeId")]
        int TournamentThemeId { get; set; }

        [DataMember(Name = "periodStats")]
        LolClashRosterPeriodAggregatedStats[] PeriodStats { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterStats {\n");
            sb.Append("  RosterIconColorId: ").Append(RosterIconColorId).Append("\n");
            sb.Append("  TournamentNameLocKey: ").Append(TournamentNameLocKey).Append("\n");
            sb.Append("  RosterName: ").Append(RosterName).Append("\n");
            sb.Append("  PlayerStats: ").Append(PlayerStats).Append("\n");
            sb.Append("  TournamentPeriods: ").Append(TournamentPeriods).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  RosterShortName: ").Append(RosterShortName).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  RosterIconId: ").Append(RosterIconId).Append("\n");
            sb.Append("  TournamentThemeId: ").Append(TournamentThemeId).Append("\n");
            sb.Append("  PeriodStats: ").Append(PeriodStats).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}