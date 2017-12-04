using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPosition {
    [DataMember(Name = "horizontal")]
    string Horizontal {get; set;}

    [DataMember(Name = "vertical")]
    string Vertical {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChampionsCollectionsChampionSkinEmblemPosition {\n");
      sb.Append("  Horizontal: ").Append(Horizontal).Append("\n");
      sb.Append("  Vertical: ").Append(Vertical).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}