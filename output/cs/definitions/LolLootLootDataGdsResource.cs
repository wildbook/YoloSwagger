using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLootDataGdsResource
    {
        [DataMember(Name = "LootItems")]
        public LolLootLootItemGdsResource[] LootItems { get; set; }

        [DataMember(Name = "LootRecipes")]
        public LolLootLootRecipeGdsResource[] LootRecipes { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootDataGdsResource {\n");
            sb.Append("  LootItems: ").Append(LootItems).Append("\n");
            sb.Append("  LootRecipes: ").Append(LootRecipes).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}