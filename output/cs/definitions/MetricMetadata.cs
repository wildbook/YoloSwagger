using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MetricMetadata
    {
        [DataMember(Name = "category")]
        string Category { get; set; }

        [DataMember(Name = "info")]
        string Info { get; set; }

        [DataMember(Name = "alerts")]
        MetricMetadataAlert[] Alerts { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "data_type")]
        MetricDataType Data_type { get; set; }

        [DataMember(Name = "destination")]
        string Destination { get; set; }

        [DataMember(Name = "sample_window_ms")]
        uint Sample_window_ms { get; set; }

        [DataMember(Name = "period")]
        uint Period { get; set; }

        [DataMember(Name = "priority")]
        MetricPriority Priority { get; set; }

        [DataMember(Name = "pretty_name")]
        string Pretty_name { get; set; }

        [DataMember(Name = "notify")]
        MetricMetadataNotify Notify { get; set; }

        [DataMember(Name = "units")]
        string Units { get; set; }

        [DataMember(Name = "type")]
        MetricType Type { get; set; }

        [DataMember(Name = "transientAggregation")]
        AggregationType TransientAggregation { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MetricMetadata {\n");
            sb.Append("  Category: ").Append(Category).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  Alerts: ").Append(Alerts).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Data_type: ").Append(Data_type).Append("\n");
            sb.Append("  Destination: ").Append(Destination).Append("\n");
            sb.Append("  Sample_window_ms: ").Append(Sample_window_ms).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("  Pretty_name: ").Append(Pretty_name).Append("\n");
            sb.Append("  Notify: ").Append(Notify).Append("\n");
            sb.Append("  Units: ").Append(Units).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  TransientAggregation: ").Append(TransientAggregation).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}