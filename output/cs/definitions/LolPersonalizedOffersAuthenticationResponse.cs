using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationResponse {
    [DataMember(Name = "token")]
    string Token {get; set;}

    [DataMember(Name = "expiration")]
    string Expiration {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersAuthenticationResponse {\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("  Expiration: ").Append(Expiration).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}