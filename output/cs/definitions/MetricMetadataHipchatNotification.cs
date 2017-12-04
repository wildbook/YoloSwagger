using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MetricMetadataHipchatNotification {
    [DataMember(Name = "roomid")]
    string Roomid {get; set;}

    [DataMember(Name = "tags")]
    string Tags {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MetricMetadataHipchatNotification {\n");
      sb.Append("  Roomid: ").Append(Roomid).Append("\n");
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}