using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersOfferId
    {
        [DataMember(Name = "offerId")]
        public string OfferId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersOfferId {\n");
            sb.Append("  OfferId: ").Append(OfferId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}