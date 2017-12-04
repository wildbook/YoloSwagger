using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersOffers {
    [DataMember(Name = "offers")]
    LolPersonalizedOffersOffer[] Offers {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersOffers {\n");
      sb.Append("  Offers: ").Append(Offers).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}