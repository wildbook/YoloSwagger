using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MetricMetadata
    {
        [DataMember(Name = "alerts")]
        public MetricMetadataAlert[] Alerts { get; set; }

        [DataMember(Name = "category")]
        public string Category { get; set; }

        [DataMember(Name = "data_type")]
        public MetricDataType Data_type { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "destination")]
        public string Destination { get; set; }

        [DataMember(Name = "info")]
        public string Info { get; set; }

        [DataMember(Name = "notify")]
        public MetricMetadataNotify Notify { get; set; }

        [DataMember(Name = "period")]
        public uint Period { get; set; }

        [DataMember(Name = "pretty_name")]
        public string Pretty_name { get; set; }

        [DataMember(Name = "priority")]
        public MetricPriority Priority { get; set; }

        [DataMember(Name = "sample_window_ms")]
        public uint Sample_window_ms { get; set; }

        [DataMember(Name = "transientAggregation")]
        public AggregationType TransientAggregation { get; set; }

        [DataMember(Name = "type")]
        public MetricType Type { get; set; }

        [DataMember(Name = "units")]
        public string Units { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MetricMetadata {\n");
            sb.Append("  Alerts: ").Append(Alerts).Append("\n");
            sb.Append("  Category: ").Append(Category).Append("\n");
            sb.Append("  Data_type: ").Append(Data_type).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Destination: ").Append(Destination).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  Notify: ").Append(Notify).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  Pretty_name: ").Append(Pretty_name).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("  Sample_window_ms: ").Append(Sample_window_ms).Append("\n");
            sb.Append("  TransientAggregation: ").Append(TransientAggregation).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Units: ").Append(Units).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}