using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootGameflowSession {
    [DataMember(Name = "phase")]
    LolLootGameflowPhase Phase {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootGameflowSession {\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}