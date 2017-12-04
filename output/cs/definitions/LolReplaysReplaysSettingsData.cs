using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolReplaysReplaysSettingsData {
    [DataMember(Name = "replays-folder-path")]
    string ReplaysFolderPath {get; set;}

    [DataMember(Name = "highlights-folder-path")]
    string HighlightsFolderPath {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolReplaysReplaysSettingsData {\n");
      sb.Append("  ReplaysFolderPath: ").Append(ReplaysFolderPath).Append("\n");
      sb.Append("  HighlightsFolderPath: ").Append(HighlightsFolderPath).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}