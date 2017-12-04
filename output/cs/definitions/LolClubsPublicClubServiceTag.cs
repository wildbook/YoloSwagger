using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClubsPublicClubServiceTag {
    [DataMember(Name = "tag")]
    string Tag {get; set;}

    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClubsPublicClubServiceTag {\n");
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}