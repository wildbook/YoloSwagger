using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolAccountVerificationSendTokenRequest {
    [DataMember(Name = "device")]
    string Device {get; set;}

    [DataMember(Name = "locale")]
    string Locale {get; set;}

    [DataMember(Name = "mediator")]
    string Mediator {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolAccountVerificationSendTokenRequest {\n");
      sb.Append("  Device: ").Append(Device).Append("\n");
      sb.Append("  Locale: ").Append(Locale).Append("\n");
      sb.Append("  Mediator: ").Append(Mediator).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}