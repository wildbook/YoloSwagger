using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolReplaysReplaysSettingsResource {
    [DataMember(Name = "data")]
    LolReplaysReplaysSettingsData Data {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolReplaysReplaysSettingsResource {\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}