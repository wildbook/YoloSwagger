using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashPendingRosterNotification {
    [DataMember(Name = "sourcePlayerId")]
    ulong SourcePlayerId {get; set;}

    [DataMember(Name = "notifyReason")]
    LolClashNotifyReason NotifyReason {get; set;}

    [DataMember(Name = "pendingRoster")]
    PendingRosterDTO PendingRoster {get; set;}

    [DataMember(Name = "targetPlayerId")]
    ulong TargetPlayerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashPendingRosterNotification {\n");
      sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
      sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
      sb.Append("  PendingRoster: ").Append(PendingRoster).Append("\n");
      sb.Append("  TargetPlayerId: ").Append(TargetPlayerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}