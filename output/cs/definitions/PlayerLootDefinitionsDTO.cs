using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerLootDefinitionsDTO
    {
        [DataMember(Name = "lootItemList")]
        public LootItemListClientDTO LootItemList { get; set; }

        [DataMember(Name = "playerLoot")]
        public PlayerLootDTO[] PlayerLoot { get; set; }

        [DataMember(Name = "queryResult")]
        public QueryResultDTO QueryResult { get; set; }

        [DataMember(Name = "recipeList")]
        public LootLcdsRecipeListClientDTO RecipeList { get; set; }

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