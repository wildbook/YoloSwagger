using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPlayerBehaviorReporterFeedback {
    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPlayerBehaviorReporterFeedback {\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}