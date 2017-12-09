using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsGetItemsRequest
    {
        [DataMember(Name = "id")]
        public uint Id { get; set; }

        [DataMember(Name = "inventoryJWTs")]
        public string[] InventoryJWTs { get; set; }

        [DataMember(Name = "inventoryTypes")]
        public string[] InventoryTypes { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsGetItemsRequest {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InventoryJWTs: ").Append(InventoryJWTs).Append("\n");
            sb.Append("  InventoryTypes: ").Append(InventoryTypes).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}