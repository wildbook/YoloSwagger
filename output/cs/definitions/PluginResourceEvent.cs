using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PluginResourceEvent
    {
        [DataMember(Name = "data")]
        public dynamic Data { get; set; }

        [DataMember(Name = "eventType")]
        public PluginResourceEventType EventType { get; set; }

        [DataMember(Name = "uri")]
        public string Uri { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginResourceEvent {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  EventType: ").Append(EventType).Append("\n");
            sb.Append("  Uri: ").Append(Uri).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}