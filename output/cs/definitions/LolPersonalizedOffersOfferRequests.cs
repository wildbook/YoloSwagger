using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersOfferRequests
    {
        [DataMember(Name = "offers")]
        public LolPersonalizedOffersOfferRequest[] Offers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersOfferRequests {\n");
            sb.Append("  Offers: ").Append(Offers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}