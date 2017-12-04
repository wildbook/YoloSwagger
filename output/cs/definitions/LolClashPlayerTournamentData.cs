using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashPlayerTournamentData {
    [DataMember(Name = "bracketId")]
    long BracketId {get; set;}

    [DataMember(Name = "rosterId")]
    string RosterId {get; set;}

    [DataMember(Name = "state")]
    LolClashPlayerState State {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashPlayerTournamentData {\n");
      sb.Append("  BracketId: ").Append(BracketId).Append("\n");
      sb.Append("  RosterId: ").Append(RosterId).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}