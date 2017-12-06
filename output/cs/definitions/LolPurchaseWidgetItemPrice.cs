using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPurchaseWidgetItemPrice
    {
        [DataMember(Name = "currencyType")]
        string CurrencyType { get; set; }

        [DataMember(Name = "price")]
        int Price { get; set; }

        [DataMember(Name = "purchasable")]
        bool Purchasable { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetItemPrice {\n");
            sb.Append("  CurrencyType: ").Append(CurrencyType).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("  Purchasable: ").Append(Purchasable).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}