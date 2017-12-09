using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MetricMetadataNotify
    {
        [DataMember(Name = "email")]
        public string[] Email { get; set; }

        [DataMember(Name = "hipchat")]
        public MetricMetadataHipchatNotification[] Hipchat { get; set; }

        [DataMember(Name = "pagerduty")]
        public MetricMetadataPagerDutyNotification[] Pagerduty { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MetricMetadataNotify {\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("  Hipchat: ").Append(Hipchat).Append("\n");
            sb.Append("  Pagerduty: ").Append(Pagerduty).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}