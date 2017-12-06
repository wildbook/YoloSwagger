using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MetricMetadataAlert
    {
        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "info")]
        string Info { get; set; }

        [DataMember(Name = "level")]
        string Level { get; set; }

        [DataMember(Name = "max")]
        double Max { get; set; }

        [DataMember(Name = "min")]
        double Min { get; set; }

        [DataMember(Name = "notify")]
        MetricMetadataNotify Notify { get; set; }

        [DataMember(Name = "pretty_name")]
        string Pretty_name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MetricMetadataAlert {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Info: ").Append(Info).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  Max: ").Append(Max).Append("\n");
            sb.Append("  Min: ").Append(Min).Append("\n");
            sb.Append("  Notify: ").Append(Notify).Append("\n");
            sb.Append("  Pretty_name: ").Append(Pretty_name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}