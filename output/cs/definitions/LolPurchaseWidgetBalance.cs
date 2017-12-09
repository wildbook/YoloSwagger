using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetBalance
    {
        [DataMember(Name = "amount")]
        public int Amount { get; set; }

        [DataMember(Name = "currencyType")]
        public string CurrencyType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetBalance {\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  CurrencyType: ").Append(CurrencyType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}