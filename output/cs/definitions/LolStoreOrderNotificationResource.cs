using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreOrderNotificationResource {
    [DataMember(Name = "status")]
    string Status {get; set;}

    [DataMember(Name = "eventType")]
    string EventType {get; set;}

    [DataMember(Name = "eventTypeId")]
    string EventTypeId {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreOrderNotificationResource {\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  EventType: ").Append(EventType).Append("\n");
      sb.Append("  EventTypeId: ").Append(EventTypeId).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}