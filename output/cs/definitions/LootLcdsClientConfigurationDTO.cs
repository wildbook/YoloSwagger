using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LootLcdsClientConfigurationDTO {
    [DataMember(Name = "currenciesUsingCapWallets")]
    string[] CurrenciesUsingCapWallets {get; set;}

    [DataMember(Name = "lootItemsUsingBreakoutRecipeMenu")]
    string[] LootItemsUsingBreakoutRecipeMenu {get; set;}

    [DataMember(Name = "lootMaterialsToAlwaysRender")]
    string[] LootMaterialsToAlwaysRender {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LootLcdsClientConfigurationDTO {\n");
      sb.Append("  CurrenciesUsingCapWallets: ").Append(CurrenciesUsingCapWallets).Append("\n");
      sb.Append("  LootItemsUsingBreakoutRecipeMenu: ").Append(LootItemsUsingBreakoutRecipeMenu).Append("\n");
      sb.Append("  LootMaterialsToAlwaysRender: ").Append(LootMaterialsToAlwaysRender).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}