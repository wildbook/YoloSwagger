using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashPlayerNotificationData
    {
        [DataMember(Name = "notification")]
        public LolClashPlayerNotification Notification { get; set; }

        [DataMember(Name = "notifyReason")]
        public LolClashNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "rosterNotifyReason")]
        public LolClashRosterNotifyReason RosterNotifyReason { get; set; }

        [DataMember(Name = "sourceSummonerId")]
        public ulong SourceSummonerId { get; set; }

        [DataMember(Name = "targetSummonerId")]
        public ulong TargetSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPlayerNotificationData {\n");
            sb.Append("  Notification: ").Append(Notification).Append("\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  RosterNotifyReason: ").Append(RosterNotifyReason).Append("\n");
            sb.Append("  SourceSummonerId: ").Append(SourceSummonerId).Append("\n");
            sb.Append("  TargetSummonerId: ").Append(TargetSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}