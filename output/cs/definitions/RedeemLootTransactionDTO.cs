using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RedeemLootTransactionDTO {
    [DataMember(Name = "lootName")]
    string LootName {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RedeemLootTransactionDTO {\n");
      sb.Append("  LootName: ").Append(LootName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}