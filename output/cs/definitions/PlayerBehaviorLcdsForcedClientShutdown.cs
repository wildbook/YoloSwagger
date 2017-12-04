using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PlayerBehaviorLcdsForcedClientShutdown {
    [DataMember(Name = "additionalInfo")]
    string AdditionalInfo {get; set;}

    [DataMember(Name = "reason")]
    string Reason {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PlayerBehaviorLcdsForcedClientShutdown {\n");
      sb.Append("  AdditionalInfo: ").Append(AdditionalInfo).Append("\n");
      sb.Append("  Reason: ").Append(Reason).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}