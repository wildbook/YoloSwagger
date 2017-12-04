using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct HighlightsSettingsResource {
    [DataMember(Name = "data")]
    HighlightsSettingsData Data {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class HighlightsSettingsResource {\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}