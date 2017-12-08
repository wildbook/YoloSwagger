using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct StoreLcdsStoreFulfillmentNotification
    {
        [DataMember(Name = "inventoryType")]
        string InventoryType { get; set; }

        [DataMember(Name = "rp")]
        long Rp { get; set; }

        [DataMember(Name = "data")]
        dynamic Data { get; set; }

        [DataMember(Name = "ip")]
        long Ip { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class StoreLcdsStoreFulfillmentNotification {\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  Rp: ").Append(Rp).Append("\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  Ip: ").Append(Ip).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}