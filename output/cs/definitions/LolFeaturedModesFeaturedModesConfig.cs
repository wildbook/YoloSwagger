using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolFeaturedModesFeaturedModesConfig
    {
        [DataMember(Name = "MaxNotificationSaveDelayMinutes")]
        public uint MaxNotificationSaveDelayMinutes { get; set; }

        [DataMember(Name = "NotificationsEnabled")]
        public bool NotificationsEnabled { get; set; }

        [DataMember(Name = "QueueToggleNotificationMinutesThreshold")]
        public uint QueueToggleNotificationMinutesThreshold { get; set; }

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