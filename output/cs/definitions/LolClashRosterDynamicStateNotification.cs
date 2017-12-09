using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterDynamicStateNotification
    {
        [DataMember(Name = "notifyReason")]
        public LolClashRosterNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "rosterDynamicState")]
        public RosterDynamicStateDTO RosterDynamicState { get; set; }

        [DataMember(Name = "sourcePlayerId")]
        public ulong SourcePlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterDynamicStateNotification {\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  RosterDynamicState: ").Append(RosterDynamicState).Append("\n");
            sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}