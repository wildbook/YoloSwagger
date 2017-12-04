using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersOfferId {
    [DataMember(Name = "offerId")]
    string OfferId {get; set;}

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