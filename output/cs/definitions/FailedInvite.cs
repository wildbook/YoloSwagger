using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct FailedInvite {
    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "exception")]
    ClientRequestError Exception {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class FailedInvite {\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  Exception: ").Append(Exception).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}