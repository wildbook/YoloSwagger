using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SeriesAlertDTO {
    [DataMember(Name = "alertTime")]
    long AlertTime {get; set;}

    [DataMember(Name = "description")]
    string Description {get; set;}

    [DataMember(Name = "title")]
    string Title {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SeriesAlertDTO {\n");
      sb.Append("  AlertTime: ").Append(AlertTime).Append("\n");
      sb.Append("  Description: ").Append(Description).Append("\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}