using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGameflowGameflowGameDodge {
    [DataMember(Name = "phase")]
    LolGameflowGameflowPhase Phase {get; set;}

    [DataMember(Name = "dodgeIds")]
    ulong[] DodgeIds {get; set;}

    [DataMember(Name = "state")]
    LolGameflowGameflowGameDodgeState State {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGameflowGameflowGameDodge {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("  DodgeIds: ").Append(DodgeIds).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}