using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolItemSetsPreferredItemSlot {
    [DataMember(Name = "id")]
    string Id {get; set;}

    [DataMember(Name = "preferredItemSlot")]
    short PreferredItemSlot {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolItemSetsPreferredItemSlot {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  PreferredItemSlot: ").Append(PreferredItemSlot).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}