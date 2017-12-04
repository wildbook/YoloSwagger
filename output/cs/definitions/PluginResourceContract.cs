using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PluginResourceContract {
    [DataMember(Name = "fullName")]
    string FullName {get; set;}

    [DataMember(Name = "version")]
    string Version {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PluginResourceContract {\n");
      sb.Append("  FullName: ").Append(FullName).Append("\n");
      sb.Append("  Version: ").Append(Version).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}