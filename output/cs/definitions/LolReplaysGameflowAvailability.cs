using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolReplaysGameflowAvailability {
    [DataMember(Name = "state")]
    string State {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolReplaysGameflowAvailability {\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}