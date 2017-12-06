using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct CollectionsLcdsStoreFulfillmentNotification
    {
        [DataMember(Name = "data")]
        dynamic Data { get; set; }

        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsStoreFulfillmentNotification {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}