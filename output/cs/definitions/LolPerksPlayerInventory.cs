using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPerksPlayerInventory {
    [DataMember(Name = "ownedPageCount")]
    uint OwnedPageCount {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPerksPlayerInventory {\n");
      sb.Append("  OwnedPageCount: ").Append(OwnedPageCount).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}