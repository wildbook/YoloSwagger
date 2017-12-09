using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersPurchaseResponse
    {
        [DataMember(Name = "items")]
        public LolPersonalizedOffersPurchaseItem[] Items { get; set; }

        [DataMember(Name = "wallet")]
        public LolPersonalizedOffersWallet Wallet { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersPurchaseResponse {\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  Wallet: ").Append(Wallet).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}