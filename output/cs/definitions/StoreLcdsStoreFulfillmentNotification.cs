using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct StoreLcdsStoreFulfillmentNotification
    {
        [DataMember(Name = "data")]
        public dynamic Data { get; set; }

        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "ip")]
        public long Ip { get; set; }

        [DataMember(Name = "rp")]
        public long Rp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class StoreLcdsStoreFulfillmentNotification {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  Ip: ").Append(Ip).Append("\n");
            sb.Append("  Rp: ").Append(Rp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}