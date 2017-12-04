using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashRosterDetails {
    [DataMember(Name = "iconColorId")]
    int IconColorId {get; set;}

    [DataMember(Name = "iconId")]
    int IconId {get; set;}

    [DataMember(Name = "shortName")]
    string ShortName {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashRosterDetails {\n");
      sb.Append("  IconColorId: ").Append(IconColorId).Append("\n");
      sb.Append("  IconId: ").Append(IconId).Append("\n");
      sb.Append("  ShortName: ").Append(ShortName).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}