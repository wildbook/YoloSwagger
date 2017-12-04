using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEmailVerificationEmailUpdate {
    [DataMember(Name = "password")]
    string Password {get; set;}

    [DataMember(Name = "email")]
    string Email {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEmailVerificationEmailUpdate {\n");
      sb.Append("  Password: ").Append(Password).Append("\n");
      sb.Append("  Email: ").Append(Email).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}