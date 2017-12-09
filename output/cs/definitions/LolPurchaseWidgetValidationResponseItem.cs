using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetValidationResponseItem
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "itemKey")]
        public LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "prices")]
        public LolPurchaseWidgetItemPrice[] Prices { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        [DataMember(Name = "sale")]
        public LolPurchaseWidgetSale? Sale { get; set; }

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