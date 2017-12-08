using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolFeaturedModesFeaturedModesConfig
    {
        [DataMember(Name = "MaxNotificationSaveDelayMinutes")]
        uint MaxNotificationSaveDelayMinutes { get; set; }

        [DataMember(Name = "NotificationsEnabled")]
        bool NotificationsEnabled { get; set; }

        [DataMember(Name = "QueueToggleNotificationMinutesThreshold")]
        uint QueueToggleNotificationMinutesThreshold { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolFeaturedModesFeaturedModesConfig {\n");
            sb.Append("  MaxNotificationSaveDelayMinutes: ").Append(MaxNotificationSaveDelayMinutes).Append("\n");
            sb.Append("  NotificationsEnabled: ").Append(NotificationsEnabled).Append("\n");
            sb.Append("  QueueToggleNotificationMinutesThreshold: ").Append(QueueToggleNotificationMinutesThreshold).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}