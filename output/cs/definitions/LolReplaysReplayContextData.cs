using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolReplaysReplayContextData {
    [DataMember(Name = "componentType")]
    string ComponentType {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolReplaysReplayContextData {\n");
      sb.Append("  ComponentType: ").Append(ComponentType).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}