using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolKrShutdownLawShutdownLawNotification {
    [DataMember(Name = "type")]
    LolKrShutdownLawShutdownLawStatus Type {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolKrShutdownLawShutdownLawNotification {\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}