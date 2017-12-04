using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChampSelectLegacyGameflowGameClient {
    [DataMember(Name = "visible")]
    bool Visible {get; set;}

    [DataMember(Name = "running")]
    bool Running {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChampSelectLegacyGameflowGameClient {\n");
      sb.Append("  Visible: ").Append(Visible).Append("\n");
      sb.Append("  Running: ").Append(Running).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}