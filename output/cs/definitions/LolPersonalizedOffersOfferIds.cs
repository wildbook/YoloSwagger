using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersOfferIds
    {
        [DataMember(Name = "offers")]
        public LolPersonalizedOffersOfferId[] Offers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersOfferIds {\n");
            sb.Append("  Offers: ").Append(Offers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}