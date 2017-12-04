using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksDisabledPerksResource {
    [DataMember(Name = "disabledPerks")]
    int[] DisabledPerks {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksDisabledPerksResource {\n");
      sb.Append("  DisabledPerks: ").Append(DisabledPerks).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}