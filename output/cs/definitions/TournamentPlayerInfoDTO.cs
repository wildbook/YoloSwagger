using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TournamentPlayerInfoDTO
    {
        [DataMember(Name = "player")]
        public PlayerDTO Player { get; set; }

        [DataMember(Name = "rosterStats")]
        public RosterStatsDTO[] RosterStats { get; set; }

        [DataMember(Name = "seasonVp")]
        public int SeasonVp { get; set; }

        [DataMember(Name = "themeVps")]
        public ThemeVp[] ThemeVps { get; set; }

        [DataMember(Name = "time")]
        public long Time { get; set; }

        [DataMember(Name = "tournamentInfo")]
        public TournamentInfoDTO[] TournamentInfo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TournamentPlayerInfoDTO {\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  RosterStats: ").Append(RosterStats).Append("\n");
            sb.Append("  SeasonVp: ").Append(SeasonVp).Append("\n");
            sb.Append("  ThemeVps: ").Append(ThemeVps).Append("\n");
            sb.Append("  Time: ").Append(Time).Append("\n");
            sb.Append("  TournamentInfo: ").Append(TournamentInfo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}