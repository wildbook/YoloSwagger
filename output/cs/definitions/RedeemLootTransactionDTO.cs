using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RedeemLootTransactionDTO
    {
        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RedeemLootTransactionDTO {\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}