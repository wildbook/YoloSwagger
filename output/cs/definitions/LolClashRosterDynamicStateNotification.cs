using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolClashRosterDynamicStateNotification {
    [DataMember(Name = "sourcePlayerId")]
    ulong SourcePlayerId {get; set;}

    [DataMember(Name = "notifyReason")]
    LolClashRosterNotifyReason NotifyReason {get; set;}

    [DataMember(Name = "rosterDynamicState")]
    RosterDynamicStateDTO RosterDynamicState {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolClashRosterDynamicStateNotification {\n");
      sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
      sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
      sb.Append("  RosterDynamicState: ").Append(RosterDynamicState).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}