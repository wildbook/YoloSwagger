using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ServiceStatusResource
    {
        [DataMember(Name = "humanReadableUrl")]
        public string HumanReadableUrl { get; set; }

        [DataMember(Name = "status")]
        public ServiceStatusResource_Status Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ServiceStatusResource {\n");
            sb.Append("  HumanReadableUrl: ").Append(HumanReadableUrl).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}