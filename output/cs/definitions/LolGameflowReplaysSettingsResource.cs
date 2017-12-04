using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolGameflowReplaysSettingsResource {
    [DataMember(Name = "data")]
    LolGameflowReplaysSettingsData Data {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolGameflowReplaysSettingsResource {\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}