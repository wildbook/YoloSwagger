using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootLootDataGdsResource
    {
        [DataMember(Name = "LootRecipes")]
        LolLootLootRecipeGdsResource[] LootRecipes { get; set; }

        [DataMember(Name = "LootItems")]
        LolLootLootItemGdsResource[] LootItems { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootDataGdsResource {\n");
            sb.Append("  LootRecipes: ").Append(LootRecipes).Append("\n");
            sb.Append("  LootItems: ").Append(LootItems).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}