using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsCreateOrUpdateItemsRequest
    {
        [DataMember(Name = "id")]
        public uint Id { get; set; }

        [DataMember(Name = "inventoryJWTs")]
        public string[] InventoryJWTs { get; set; }

        [DataMember(Name = "items")]
        public Dictionary<string, dynamic> Items { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsCreateOrUpdateItemsRequest {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InventoryJWTs: ").Append(InventoryJWTs).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}