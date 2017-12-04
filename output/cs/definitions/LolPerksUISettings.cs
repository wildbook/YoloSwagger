using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksUISettings {
    [DataMember(Name = "showLongDescriptions")]
    bool ShowLongDescriptions {get; set;}

    [DataMember(Name = "showPresetPages")]
    bool ShowPresetPages {get; set;}

    [DataMember(Name = "gridModeEnabled")]
    bool GridModeEnabled {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksUISettings {\n");
      sb.Append("  ShowLongDescriptions: ").Append(ShowLongDescriptions).Append("\n");
      sb.Append("  ShowPresetPages: ").Append(ShowPresetPages).Append("\n");
      sb.Append("  GridModeEnabled: ").Append(GridModeEnabled).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}