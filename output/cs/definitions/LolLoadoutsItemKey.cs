using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoadoutsItemKey
    {
        [DataMember(Name = "itemId")]
        int ItemId { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsItemKey {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}