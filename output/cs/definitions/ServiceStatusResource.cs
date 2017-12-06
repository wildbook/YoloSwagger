using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ServiceStatusResource
    {
        [DataMember(Name = "humanReadableUrl")]
        string HumanReadableUrl { get; set; }

        [DataMember(Name = "status")]
        ServiceStatusResource_Status Status { get; set; }

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