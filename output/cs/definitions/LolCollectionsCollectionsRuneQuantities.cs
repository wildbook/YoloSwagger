using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantities {
    [DataMember(Name = "runeQuantities")]
    LolCollectionsCollectionsRuneQuantity[] RuneQuantities {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsRuneQuantities {\n");
      sb.Append("  RuneQuantities: ").Append(RuneQuantities).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}