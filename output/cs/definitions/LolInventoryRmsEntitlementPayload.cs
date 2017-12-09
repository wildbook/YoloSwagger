using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolInventoryRmsEntitlementPayload
    {
        [DataMember(Name = "itemId")]
        public string ItemId { get; set; }

        [DataMember(Name = "itemTypeId")]
        public string ItemTypeId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolInventoryRmsEntitlementPayload {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  ItemTypeId: ").Append(ItemTypeId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}