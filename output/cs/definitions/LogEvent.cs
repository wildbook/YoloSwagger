using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // Describes a log entry.
  [DataContract]  struct LogEvent {
    [DataMember(Name = "message")]
    string Message {get; set;}

    [DataMember(Name = "severity")]
    LogSeverityLevels Severity {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LogEvent {\n");
      sb.Append("  Message: ").Append(Message).Append("\n");
      sb.Append("  Severity: ").Append(Severity).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}