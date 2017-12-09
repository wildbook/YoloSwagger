using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetPurchaseItem
    {
        [DataMember(Name = "itemKey")]
        public LolPurchaseWidgetItemKey ItemKey { get; set; }

        [DataMember(Name = "purchaseCurrencyInfo")]
        public LolPurchaseWidgetItemPrice PurchaseCurrencyInfo { get; set; }

        [DataMember(Name = "quantity")]
        public int Quantity { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetPurchaseItem {\n");
            sb.Append("  ItemKey: ").Append(ItemKey).Append("\n");
            sb.Append("  PurchaseCurrencyInfo: ").Append(PurchaseCurrencyInfo).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}