using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashChangeIconRequest {
    [DataMember(Name = "iconColorId")]
    int IconColorId {get; set;}

    [DataMember(Name = "iconId")]
    int IconId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashChangeIconRequest {\n");
      sb.Append("  IconColorId: ").Append(IconColorId).Append("\n");
      sb.Append("  IconId: ").Append(IconId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}