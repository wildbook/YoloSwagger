using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreOrderNotificationResource
    {
        [DataMember(Name = "eventType")]
        public string EventType { get; set; }

        [DataMember(Name = "eventTypeId")]
        public string EventTypeId { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "status")]
        public string Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreOrderNotificationResource {\n");
            sb.Append("  EventType: ").Append(EventType).Append("\n");
            sb.Append("  EventTypeId: ").Append(EventTypeId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}