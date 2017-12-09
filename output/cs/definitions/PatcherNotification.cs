using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherNotification
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "notificationId")]
        public PatcherNotificationId NotificationId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherNotification {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  NotificationId: ").Append(NotificationId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}