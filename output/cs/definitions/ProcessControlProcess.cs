using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ProcessControlProcess
    {
        [DataMember(Name = "status")]
        string Status { get; set; }

        [DataMember(Name = "restart-countdown-seconds")]
        float? RestartCountdownSeconds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ProcessControlProcess {\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  RestartCountdownSeconds: ").Append(RestartCountdownSeconds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}