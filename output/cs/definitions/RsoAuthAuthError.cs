using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RsoAuthAuthError {
    [DataMember(Name = "errorDescription")]
    string ErrorDescription {get; set;}

    [DataMember(Name = "error")]
    string Error {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RsoAuthAuthError {\n");
      sb.Append("  ErrorDescription: ").Append(ErrorDescription).Append("\n");
      sb.Append("  Error: ").Append(Error).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}