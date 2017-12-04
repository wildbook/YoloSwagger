using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LootLcdsRecipeSlotClientDTO {
    [DataMember(Name = "query")]
    string Query {get; set;}

    [DataMember(Name = "quantityExpression")]
    string QuantityExpression {get; set;}

    [DataMember(Name = "slotNumber")]
    int SlotNumber {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LootLcdsRecipeSlotClientDTO {\n");
      sb.Append("  Query: ").Append(Query).Append("\n");
      sb.Append("  QuantityExpression: ").Append(QuantityExpression).Append("\n");
      sb.Append("  SlotNumber: ").Append(SlotNumber).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}