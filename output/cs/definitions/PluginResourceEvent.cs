using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PluginResourceEvent {
    [DataMember(Name = "eventType")]
    PluginResourceEventType EventType {get; set;}

    [DataMember(Name = "data")]
    dynamic Data {get; set;}

    [DataMember(Name = "uri")]
    string Uri {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PluginResourceEvent {\n");
      sb.Append("  EventType: ").Append(EventType).Append("\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
      sb.Append("  Uri: ").Append(Uri).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}