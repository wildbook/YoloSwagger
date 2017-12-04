using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLootRecipe {
    [DataMember(Name = "outputs")]
    LolLootRecipeOutput[] Outputs {get; set;}

    [DataMember(Name = "recipeName")]
    string RecipeName {get; set;}

    [DataMember(Name = "crafterName")]
    string CrafterName {get; set;}

    [DataMember(Name = "slots")]
    LolLootRecipeSlot[] Slots {get; set;}

    [DataMember(Name = "displayCategories")]
    string DisplayCategories {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "metadata")]
    LolLootRecipeMetadata Metadata {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLootRecipe {\n");
      sb.Append("  Outputs: ").Append(Outputs).Append("\n");
      sb.Append("  RecipeName: ").Append(RecipeName).Append("\n");
      sb.Append("  CrafterName: ").Append(CrafterName).Append("\n");
      sb.Append("  Slots: ").Append(Slots).Append("\n");
      sb.Append("  DisplayCategories: ").Append(DisplayCategories).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Metadata: ").Append(Metadata).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}