using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcon {
    [DataMember(Name = "iconId")]
    int IconId {get; set;}

    [DataMember(Name = "ownership")]
    LolCollectionsCollectionsOwnership Ownership {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsSummonerIcon {\n");
      sb.Append("  IconId: ").Append(IconId).Append("\n");
      sb.Append("  Ownership: ").Append(Ownership).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}