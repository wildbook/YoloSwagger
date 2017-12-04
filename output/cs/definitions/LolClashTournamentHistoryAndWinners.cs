using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashTournamentHistoryAndWinners {
    [DataMember(Name = "tournamentWinners")]
    LolClashTournamentWinnerHistory TournamentWinners {get; set;}

    [DataMember(Name = "tournamentHistory")]
    LolClashTournament[] TournamentHistory {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashTournamentHistoryAndWinners {\n");
      sb.Append("  TournamentWinners: ").Append(TournamentWinners).Append("\n");
      sb.Append("  TournamentHistory: ").Append(TournamentHistory).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}