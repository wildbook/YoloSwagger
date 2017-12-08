using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPurchaseWidgetValidationRequestItem
    {
        [DataMember(Name = "itemKey")]
        LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "quantity")]
        int Quantity { get; set; }

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