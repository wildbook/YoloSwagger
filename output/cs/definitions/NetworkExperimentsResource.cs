using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct NetworkExperimentsResource {
    [DataMember(Name = "experiments")]
    Dictionary<string, NetworkExperimentResource> Experiments {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class NetworkExperimentsResource {\n");
      sb.Append("  Experiments: ").Append(Experiments).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}