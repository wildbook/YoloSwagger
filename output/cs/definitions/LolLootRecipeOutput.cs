using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootRecipeOutput {
    [DataMember(Name = "lootName")]
    string LootName {get; set;}

    [DataMember(Name = "quantity")]
    int Quantity {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootRecipeOutput {\n");
      sb.Append("  LootName: ").Append(LootName).Append("\n");
      sb.Append("  Quantity: ").Append(Quantity).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}