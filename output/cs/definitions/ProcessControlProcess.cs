using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ProcessControlProcess
    {
        [DataMember(Name = "restart-countdown-seconds")]
        public float? RestartCountdownSeconds { get; set; }

        [DataMember(Name = "status")]
        public string Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProcessControlProcess {\n");
            sb.Append("  RestartCountdownSeconds: ").Append(RestartCountdownSeconds).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}