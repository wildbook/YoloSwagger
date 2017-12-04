using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LeaverBusterLcdsMatchmakingNotification {
    [DataMember(Name = "playerJoinFailures")]
    dynamic[] PlayerJoinFailures {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LeaverBusterLcdsMatchmakingNotification {\n");
      sb.Append("  PlayerJoinFailures: ").Append(PlayerJoinFailures).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}