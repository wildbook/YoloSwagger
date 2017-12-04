using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LCDSBroadcastNotification {
    [DataMember(Name = "broadcastMessages")]
    dynamic[] BroadcastMessages {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LCDSBroadcastNotification {\n");
      sb.Append("  BroadcastMessages: ").Append(BroadcastMessages).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}