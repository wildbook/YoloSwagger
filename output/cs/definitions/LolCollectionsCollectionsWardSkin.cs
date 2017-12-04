using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsWardSkin {
    [DataMember(Name = "wardShadowImagePath")]
    string WardShadowImagePath {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "wardImagePath")]
    string WardImagePath {get; set;}

    [DataMember(Name = "ownership")]
    LolCollectionsCollectionsOwnership Ownership {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsWardSkin {\n");
      sb.Append("  WardShadowImagePath: ").Append(WardShadowImagePath).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  WardImagePath: ").Append(WardImagePath).Append("\n");
      sb.Append("  Ownership: ").Append(Ownership).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}