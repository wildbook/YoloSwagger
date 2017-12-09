using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootRecipeMenuConfig
    {
        [DataMember(Name = "alwaysShowLootIds")]
        public string[] AlwaysShowLootIds { get; set; }

        [DataMember(Name = "enabled")]
        public bool Enabled { get; set; }

        [DataMember(Name = "lootItemsUsingBreakoutRecipeMenu")]
        public string[] LootItemsUsingBreakoutRecipeMenu { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootRecipeMenuConfig {\n");
            sb.Append("  AlwaysShowLootIds: ").Append(AlwaysShowLootIds).Append("\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  LootItemsUsingBreakoutRecipeMenu: ").Append(LootItemsUsingBreakoutRecipeMenu).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}