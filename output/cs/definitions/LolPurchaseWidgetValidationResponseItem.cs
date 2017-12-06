using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPurchaseWidgetValidationResponseItem
    {
        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "itemKey")]
        LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "prices")]
        LolPurchaseWidgetItemPrice[] Prices { get; set; }

        [DataMember(Name = "quantity")]
        int Quantity { get; set; }

        [DataMember(Name = "sale")]
        LolPurchaseWidgetSale? Sale { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetValidationResponseItem {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  ItemKey: ").Append(ItemKey).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Prices: ").Append(Prices).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  Sale: ").Append(Sale).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}