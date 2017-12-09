using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerLootDTO
    {
        [DataMember(Name = "count")]
        public int Count { get; set; }

        [DataMember(Name = "expiryTime")]
        public long ExpiryTime { get; set; }

        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "refId")]
        public string RefId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLootDTO {\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  ExpiryTime: ").Append(ExpiryTime).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  RefId: ").Append(RefId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}