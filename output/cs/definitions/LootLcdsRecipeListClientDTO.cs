using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LootLcdsRecipeListClientDTO {
    [DataMember(Name = "lastUpdate")]
    long LastUpdate {get; set;}

    [DataMember(Name = "recipes")]
    LootLcdsRecipeClientDTO[] Recipes {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LootLcdsRecipeListClientDTO {\n");
      sb.Append("  LastUpdate: ").Append(LastUpdate).Append("\n");
      sb.Append("  Recipes: ").Append(Recipes).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}