using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SanitizerContainsSanitizedRequest {
    [DataMember(Name = "text")]
    string Text {get; set;}

    [DataMember(Name = "level")]
    uint Level {get; set;}

    [DataMember(Name = "aggressiveScan")]
    bool AggressiveScan {get; set;}

    [DataMember(Name = "removeDisallowedChars")]
    bool RemoveDisallowedChars {get; set;}

    [DataMember(Name = "includeEmbedded")]
    bool IncludeEmbedded {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SanitizerContainsSanitizedRequest {\n");
      sb.Append("  Text: ").Append(Text).Append("\n");
      sb.Append("  Level: ").Append(Level).Append("\n");
      sb.Append("  AggressiveScan: ").Append(AggressiveScan).Append("\n");
      sb.Append("  RemoveDisallowedChars: ").Append(RemoveDisallowedChars).Append("\n");
      sb.Append("  IncludeEmbedded: ").Append(IncludeEmbedded).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}