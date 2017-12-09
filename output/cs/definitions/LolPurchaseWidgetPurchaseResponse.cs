using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPurchaseWidgetPurchaseResponse
    {
        [DataMember(Name = "items")]
        public LolPurchaseWidgetPurchaseItem[] Items { get; set; }

        [DataMember(Name = "transactions")]
        public LolPurchaseWidgetTransaction[] Transactions { get; set; }

        [DataMember(Name = "wallet")]
        public LolPurchaseWidgetWallet Wallet { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPurchaseWidgetPurchaseResponse {\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Transactions: ").Append(Transactions).Append("\n");
            sb.Append("  Wallet: ").Append(Wallet).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}