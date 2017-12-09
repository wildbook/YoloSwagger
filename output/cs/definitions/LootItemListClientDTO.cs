using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LootItemListClientDTO
    {
        [DataMember(Name = "lastUpdate")]
        public long LastUpdate { get; set; }

        [DataMember(Name = "lootItems")]
        public LootItemClientDTO[] LootItems { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootItemListClientDTO {\n");
            sb.Append("  LastUpdate: ").Append(LastUpdate).Append("\n");
            sb.Append("  LootItems: ").Append(LootItems).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}