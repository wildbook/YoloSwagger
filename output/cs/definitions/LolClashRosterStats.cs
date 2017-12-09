using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterStats
    {
        [DataMember(Name = "periodStats")]
        public LolClashRosterPeriodAggregatedStats[] PeriodStats { get; set; }

        [DataMember(Name = "playerStats")]
        public Dictionary<string, LolClashRosterPlayerAggregatedStats> PlayerStats { get; set; }

        [DataMember(Name = "rosterIconColorId")]
        public int RosterIconColorId { get; set; }

        [DataMember(Name = "rosterIconId")]
        public int RosterIconId { get; set; }

        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "rosterName")]
        public string RosterName { get; set; }

        [DataMember(Name = "rosterShortName")]
        public string RosterShortName { get; set; }

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
            sb.Append("class LolClashRosterStats {\n");
            sb.Append("  PeriodStats: ").Append(PeriodStats).Append("\n");
            sb.Append("  PlayerStats: ").Append(PlayerStats).Append("\n");
            sb.Append("  RosterIconColorId: ").Append(RosterIconColorId).Append("\n");
            sb.Append("  RosterIconId: ").Append(RosterIconId).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  RosterName: ").Append(RosterName).Append("\n");
            sb.Append("  RosterShortName: ").Append(RosterShortName).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TournamentNameLocKey: ").Append(TournamentNameLocKey).Append("\n");
            sb.Append("  TournamentPeriods: ").Append(TournamentPeriods).Append("\n");
            sb.Append("  TournamentThemeId: ").Append(TournamentThemeId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}