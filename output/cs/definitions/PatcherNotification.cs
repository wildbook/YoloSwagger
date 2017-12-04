using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PatcherNotification {
    [DataMember(Name = "notificationId")]
    PatcherNotificationId NotificationId {get; set;}

    [DataMember(Name = "id")]
    string Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PatcherNotification {\n");
      sb.Append("  NotificationId: ").Append(NotificationId).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}