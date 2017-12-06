using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LootLcdsRecipeClientDTO
    {
        [DataMember(Name = "crafterName")]
        string CrafterName { get; set; }

        [DataMember(Name = "displayCategories")]
        string DisplayCategories { get; set; }

        [DataMember(Name = "metadata")]
        LootLcdsRecipeMetadata Metadata { get; set; }

        [DataMember(Name = "outputs")]
        LootLcdsRecipeOutputDTO[] Outputs { get; set; }

        [DataMember(Name = "recipeName")]
        string RecipeName { get; set; }

        [DataMember(Name = "slots")]
        LootLcdsRecipeSlotClientDTO[] Slots { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootLcdsRecipeClientDTO {\n");
            sb.Append("  CrafterName: ").Append(CrafterName).Append("\n");
            sb.Append("  DisplayCategories: ").Append(DisplayCategories).Append("\n");
            sb.Append("  Metadata: ").Append(Metadata).Append("\n");
            sb.Append("  Outputs: ").Append(Outputs).Append("\n");
            sb.Append("  RecipeName: ").Append(RecipeName).Append("\n");
            sb.Append("  Slots: ").Append(Slots).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}