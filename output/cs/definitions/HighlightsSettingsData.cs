using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct HighlightsSettingsData {
    [DataMember(Name = "highlights-folder-path")]
    string HighlightsFolderPath {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class HighlightsSettingsData {\n");
      sb.Append("  HighlightsFolderPath: ").Append(HighlightsFolderPath).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}