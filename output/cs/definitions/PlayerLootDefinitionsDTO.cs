using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerLootDefinitionsDTO
    {
        [DataMember(Name = "lootItemList")]
        LootItemListClientDTO LootItemList { get; set; }

        [DataMember(Name = "playerLoot")]
        PlayerLootDTO[] PlayerLoot { get; set; }

        [DataMember(Name = "queryResult")]
        QueryResultDTO QueryResult { get; set; }

        [DataMember(Name = "recipeList")]
        LootLcdsRecipeListClientDTO RecipeList { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLootDefinitionsDTO {\n");
            sb.Append("  LootItemList: ").Append(LootItemList).Append("\n");
            sb.Append("  PlayerLoot: ").Append(PlayerLoot).Append("\n");
            sb.Append("  QueryResult: ").Append(QueryResult).Append("\n");
            sb.Append("  RecipeList: ").Append(RecipeList).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}