using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashTournamentStateInfo {
    [DataMember(Name = "numRemainingPeriods")]
    int NumRemainingPeriods {get; set;}

    [DataMember(Name = "nextPhaseId")]
    long NextPhaseId {get; set;}

    [DataMember(Name = "currentPhaseId")]
    long CurrentPhaseId {get; set;}

    [DataMember(Name = "nextStateChangeTime")]
    long NextStateChangeTime {get; set;}

    [DataMember(Name = "state")]
    LolClashTournamentState State {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashTournamentStateInfo {\n");
      sb.Append("  NumRemainingPeriods: ").Append(NumRemainingPeriods).Append("\n");
      sb.Append("  NextPhaseId: ").Append(NextPhaseId).Append("\n");
      sb.Append("  CurrentPhaseId: ").Append(CurrentPhaseId).Append("\n");
      sb.Append("  NextStateChangeTime: ").Append(NextStateChangeTime).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}