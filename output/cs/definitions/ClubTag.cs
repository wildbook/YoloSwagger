using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ClubTag {
    [DataMember(Name = "tag")]
    string Tag {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ClubTag {\n");
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}