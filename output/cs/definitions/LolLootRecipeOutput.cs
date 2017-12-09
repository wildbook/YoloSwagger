using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootRecipeOutput
    {
        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootRecipeOutput {\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}