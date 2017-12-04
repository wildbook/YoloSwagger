using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationRequest {
    [DataMember(Name = "token")]
    string Token {get; set;}

    [DataMember(Name = "tokenType")]
    string TokenType {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolPersonalizedOffersAuthenticationRequest {\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("  TokenType: ").Append(TokenType).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}