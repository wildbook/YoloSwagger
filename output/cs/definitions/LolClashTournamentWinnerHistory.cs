using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashTournamentWinnerHistory {
    [DataMember(Name = "winners")]
    LolClashTournamentWinnerInfo[] Winners {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashTournamentWinnerHistory {\n");
      sb.Append("  Winners: ").Append(Winners).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}