using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RsoAuthAuthorization {
    [DataMember(Name = "currentAccountId")]
    ulong CurrentAccountId {get; set;}

    [DataMember(Name = "currentPlatformId")]
    string CurrentPlatformId {get; set;}

    [DataMember(Name = "subject")]
    string Subject {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RsoAuthAuthorization {\n");
      sb.Append("  CurrentAccountId: ").Append(CurrentAccountId).Append("\n");
      sb.Append("  CurrentPlatformId: ").Append(CurrentPlatformId).Append("\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}