using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RsoAuthRSOJWTConfig {
    [DataMember(Name = "token")]
    string Token {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RsoAuthRSOJWTConfig {\n");
      sb.Append("  Token: ").Append(Token).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}