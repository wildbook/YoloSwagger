using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantity {
    [DataMember(Name = "runeId")]
    uint RuneId {get; set;}

    [DataMember(Name = "quantity")]
    int Quantity {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsCollectionsRuneQuantity {\n");
      sb.Append("  RuneId: ").Append(RuneId).Append("\n");
      sb.Append("  Quantity: ").Append(Quantity).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}