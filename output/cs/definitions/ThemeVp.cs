using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ThemeVp {
    [DataMember(Name = "themeVp")]
    int _ThemeVp {get; set;}

    [DataMember(Name = "themeId")]
    int ThemeId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ThemeVp {\n");
      sb.Append("  _ThemeVp: ").Append(_ThemeVp).Append("\n");
      sb.Append("  ThemeId: ").Append(ThemeId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}