using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LcdsGameInviteBaseRuntimeException {
    [DataMember(Name = "rootCauseClassname")]
    string RootCauseClassname {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LcdsGameInviteBaseRuntimeException {\n");
      sb.Append("  RootCauseClassname: ").Append(RootCauseClassname).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}