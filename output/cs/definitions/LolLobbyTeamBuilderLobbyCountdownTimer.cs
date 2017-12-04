using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyCountdownTimer {
    [DataMember(Name = "counter")]
    int Counter {get; set;}

    [DataMember(Name = "phaseName")]
    string PhaseName {get; set;}

    [DataMember(Name = "timer")]
    long Timer {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLobbyTeamBuilderLobbyCountdownTimer {\n");
      sb.Append("  Counter: ").Append(Counter).Append("\n");
      sb.Append("  PhaseName: ").Append(PhaseName).Append("\n");
      sb.Append("  Timer: ").Append(Timer).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}