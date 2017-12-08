using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MetricMetadataNotify
    {
        [DataMember(Name = "hipchat")]
        MetricMetadataHipchatNotification[] Hipchat { get; set; }

        [DataMember(Name = "pagerduty")]
        MetricMetadataPagerDutyNotification[] Pagerduty { get; set; }

        [DataMember(Name = "email")]
        string[] Email { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MetricMetadataNotify {\n");
            sb.Append("  Hipchat: ").Append(Hipchat).Append("\n");
            sb.Append("  Pagerduty: ").Append(Pagerduty).Append("\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}