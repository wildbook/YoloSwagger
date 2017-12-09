using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LootNameRefId
    {
        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "refId")]
        public string RefId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootNameRefId {\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  RefId: ").Append(RefId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}