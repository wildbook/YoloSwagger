using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsRentalUpdateNotification
    {
        [DataMember(Name = "data")]
        public dynamic Data { get; set; }

        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsRentalUpdateNotification {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}