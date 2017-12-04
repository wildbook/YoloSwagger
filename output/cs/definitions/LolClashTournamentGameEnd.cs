using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashTournamentGameEnd {
    [DataMember(Name = "bracketId")]
    long BracketId {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashTournamentGameEnd {\n");
      sb.Append("  BracketId: ").Append(BracketId).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}