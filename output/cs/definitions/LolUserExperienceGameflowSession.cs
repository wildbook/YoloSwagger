using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolUserExperienceGameflowSession {
    [DataMember(Name = "phase")]
    LolUserExperienceGameflowPhase Phase {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolUserExperienceGameflowSession {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}