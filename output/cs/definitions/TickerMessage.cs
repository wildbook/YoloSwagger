using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TickerMessage
    {
        [DataMember(Name = "createdAt")]
        public string CreatedAt { get; set; }

        [DataMember(Name = "heading")]
        public string Heading { get; set; }

        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "severity")]
        public ServiceStatusIncident_Severity Severity { get; set; }

        [DataMember(Name = "updatedAt")]
        public string UpdatedAt { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TickerMessage {\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  Heading: ").Append(Heading).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Severity: ").Append(Severity).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}