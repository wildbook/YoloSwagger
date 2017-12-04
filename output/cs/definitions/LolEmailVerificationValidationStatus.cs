using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEmailVerificationValidationStatus {
    [DataMember(Name = "emailStatus")]
    string EmailStatus {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEmailVerificationValidationStatus {\n");
      sb.Append("  EmailStatus: ").Append(EmailStatus).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}