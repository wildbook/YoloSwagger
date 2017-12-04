using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolAccountVerificationVerifyRequest {
    [DataMember(Name = "token")]
    string Token {get; set;}

    [DataMember(Name = "mediator")]
    string Mediator {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolAccountVerificationVerifyRequest {\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("  Mediator: ").Append(Mediator).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}