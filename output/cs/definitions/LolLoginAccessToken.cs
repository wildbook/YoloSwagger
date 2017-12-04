using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLoginAccessToken {
    [DataMember(Name = "scopes")]
    string[] Scopes {get; set;}

    [DataMember(Name = "token")]
    string Token {get; set;}

    [DataMember(Name = "expiry")]
    ulong Expiry {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLoginAccessToken {\n");
      sb.Append("  Scopes: ").Append(Scopes).Append("\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("  Expiry: ").Append(Expiry).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}