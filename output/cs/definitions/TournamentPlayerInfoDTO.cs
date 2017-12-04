using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct TournamentPlayerInfoDTO {
    [DataMember(Name = "themeVps")]
    ThemeVp[] ThemeVps {get; set;}

    [DataMember(Name = "rosterStats")]
    RosterStatsDTO[] RosterStats {get; set;}

    [DataMember(Name = "tournamentInfo")]
    TournamentInfoDTO[] TournamentInfo {get; set;}

    [DataMember(Name = "seasonVp")]
    int SeasonVp {get; set;}

    [DataMember(Name = "player")]
    PlayerDTO Player {get; set;}

    [DataMember(Name = "time")]
    long Time {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class TournamentPlayerInfoDTO {\n");
      sb.Append("  ThemeVps: ").Append(ThemeVps).Append("\n");
      sb.Append("  RosterStats: ").Append(RosterStats).Append("\n");
      sb.Append("  TournamentInfo: ").Append(TournamentInfo).Append("\n");
      sb.Append("  SeasonVp: ").Append(SeasonVp).Append("\n");
      sb.Append("  Player: ").Append(Player).Append("\n");
      sb.Append("  Time: ").Append(Time).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}