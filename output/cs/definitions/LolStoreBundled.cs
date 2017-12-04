using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreBundled {
    [DataMember(Name = "flexible")]
    bool Flexible {get; set;}

    [DataMember(Name = "minimumPrices")]
    LolStoreBundledItemCost[] MinimumPrices {get; set;}

    [DataMember(Name = "items")]
    LolStoreBundledItem[] Items {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreBundled {\n");
      sb.Append("  Flexible: ").Append(Flexible).Append("\n");
      sb.Append("  MinimumPrices: ").Append(MinimumPrices).Append("\n");
      sb.Append("  Items: ").Append(Items).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}