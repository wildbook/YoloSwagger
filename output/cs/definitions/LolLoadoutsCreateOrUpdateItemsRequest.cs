using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoadoutsCreateOrUpdateItemsRequest
    {
        [DataMember(Name = "items")]
        Dictionary<string, dynamic> Items { get; set; }

        [DataMember(Name = "id")]
        uint Id { get; set; }

        [DataMember(Name = "inventoryJWTs")]
        string[] InventoryJWTs { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsCreateOrUpdateItemsRequest {\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InventoryJWTs: ").Append(InventoryJWTs).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}