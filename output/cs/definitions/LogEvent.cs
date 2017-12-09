using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // Describes a log entry.
    [DataContract]
    public struct LogEvent
    {
        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "severity")]
        public LogSeverityLevels Severity { get; set; }

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