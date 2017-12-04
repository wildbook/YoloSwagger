using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct ShutdownNotification {
    [DataMember(Name = "countdown")]
    float Countdown {get; set;}

    [DataMember(Name = "additionalInfo")]
    string AdditionalInfo {get; set;}

    [DataMember(Name = "reason")]
    ShutdownReason Reason {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class ShutdownNotification {\n");
      sb.Append("  Countdown: ").Append(Countdown).Append("\n");
      sb.Append("  AdditionalInfo: ").Append(AdditionalInfo).Append("\n");
      sb.Append("  Reason: ").Append(Reason).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}