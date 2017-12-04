using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct TickerMessage {
    [DataMember(Name = "message")]
    string Message {get; set;}

    [DataMember(Name = "updatedAt")]
    string UpdatedAt {get; set;}

    [DataMember(Name = "heading")]
    string Heading {get; set;}

    [DataMember(Name = "createdAt")]
    string CreatedAt {get; set;}

    [DataMember(Name = "severity")]
    ServiceStatusIncident_Severity Severity {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class TickerMessage {\n");
      sb.Append("  Message: ").Append(Message).Append("\n");
      sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
      sb.Append("  Heading: ").Append(Heading).Append("\n");
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      sb.Append("  Severity: ").Append(Severity).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}