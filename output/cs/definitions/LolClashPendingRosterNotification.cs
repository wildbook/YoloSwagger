using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashPendingRosterNotification
    {
        [DataMember(Name = "notifyReason")]
        public LolClashNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "pendingRoster")]
        public PendingRosterDTO PendingRoster { get; set; }

        [DataMember(Name = "sourcePlayerId")]
        public ulong SourcePlayerId { get; set; }

        [DataMember(Name = "targetPlayerId")]
        public ulong TargetPlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPendingRosterNotification {\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  PendingRoster: ").Append(PendingRoster).Append("\n");
            sb.Append("  SourcePlayerId: ").Append(SourcePlayerId).Append("\n");
            sb.Append("  TargetPlayerId: ").Append(TargetPlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}