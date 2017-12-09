using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MetricMetadataPagerDutyNotification
    {
        [DataMember(Name = "apikey")]
        public string Apikey { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MetricMetadataPagerDutyNotification {\n");
            sb.Append("  Apikey: ").Append(Apikey).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}