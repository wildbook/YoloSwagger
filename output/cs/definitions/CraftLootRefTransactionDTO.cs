using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CraftLootRefTransactionDTO
    {
        [DataMember(Name = "lootNameRefIds")]
        public LootNameRefId[] LootNameRefIds { get; set; }

        [DataMember(Name = "recipeName")]
        public string RecipeName { get; set; }

        [DataMember(Name = "repeat")]
        public int Repeat { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CraftLootRefTransactionDTO {\n");
            sb.Append("  LootNameRefIds: ").Append(LootNameRefIds).Append("\n");
            sb.Append("  RecipeName: ").Append(RecipeName).Append("\n");
            sb.Append("  Repeat: ").Append(Repeat).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}