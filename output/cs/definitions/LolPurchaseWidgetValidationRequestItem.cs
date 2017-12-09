using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetValidationRequestItem
    {
        [DataMember(Name = "itemKey")]
        public LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetValidationRequestItem {\n");
            sb.Append("  ItemKey: ").Append(ItemKey).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}