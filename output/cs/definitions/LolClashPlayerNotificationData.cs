using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashPlayerNotificationData
    {
        [DataMember(Name = "sourceSummonerId")]
        ulong SourceSummonerId { get; set; }

        [DataMember(Name = "notification")]
        LolClashPlayerNotification Notification { get; set; }

        [DataMember(Name = "notifyReason")]
        LolClashNotifyReason NotifyReason { get; set; }

        [DataMember(Name = "rosterNotifyReason")]
        LolClashRosterNotifyReason RosterNotifyReason { get; set; }

        [DataMember(Name = "targetSummonerId")]
        ulong TargetSummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashPlayerNotificationData {\n");
            sb.Append("  SourceSummonerId: ").Append(SourceSummonerId).Append("\n");
            sb.Append("  Notification: ").Append(Notification).Append("\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  RosterNotifyReason: ").Append(RosterNotifyReason).Append("\n");
            sb.Append("  TargetSummonerId: ").Append(TargetSummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}