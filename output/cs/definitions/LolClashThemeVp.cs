using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashThemeVp {
    [DataMember(Name = "vp")]
    int Vp {get; set;}

    [DataMember(Name = "themeId")]
    int ThemeId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashThemeVp {\n");
      sb.Append("  Vp: ").Append(Vp).Append("\n");
      sb.Append("  ThemeId: ").Append(ThemeId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}