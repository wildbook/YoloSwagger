using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPreEndOfGameGameflowSessionResource {
    [DataMember(Name = "phase")]
    LolPreEndOfGameGameflowPhase Phase {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPreEndOfGameGameflowSessionResource {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}