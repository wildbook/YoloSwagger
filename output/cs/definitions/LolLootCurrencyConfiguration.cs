using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootCurrencyConfiguration
    {
        [DataMember(Name = "currenciesUsingCapWallets")]
        string[] CurrenciesUsingCapWallets { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootCurrencyConfiguration {\n");
            sb.Append("  CurrenciesUsingCapWallets: ").Append(CurrenciesUsingCapWallets).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}