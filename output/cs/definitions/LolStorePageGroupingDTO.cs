using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStorePageGroupingDTO {
    [DataMember(Name = "grouped")]
    bool Grouped {get; set;}

    [DataMember(Name = "hidden")]
    bool Hidden {get; set;}

    [DataMember(Name = "items")]
    LolStoreItemKey[] Items {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStorePageGroupingDTO {\n");
      sb.Append("  Grouped: ").Append(Grouped).Append("\n");
      sb.Append("  Hidden: ").Append(Hidden).Append("\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}