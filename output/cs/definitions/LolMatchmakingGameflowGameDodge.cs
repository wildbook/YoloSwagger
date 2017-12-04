using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchmakingGameflowGameDodge {
    [DataMember(Name = "dodgeIds")]
    ulong[] DodgeIds {get; set;}

    [DataMember(Name = "state")]
    LolMatchmakingMatchmakingDodgeState State {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchmakingGameflowGameDodge {\n");
      sb.Append("  DodgeIds: ").Append(DodgeIds).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}