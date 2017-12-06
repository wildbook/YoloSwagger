using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct NetworkTestingDynamicConfig
    {
        [DataMember(Name = "IPv4OptionsProbability")]
        double IPv4OptionsProbability { get; set; }

        [DataMember(Name = "IPv4OptionsProbeCount")]
        byte IPv4OptionsProbeCount { get; set; }

        [DataMember(Name = "IPv4OptionsProbePort")]
        ushort IPv4OptionsProbePort { get; set; }

        [DataMember(Name = "IPv4OptionsProbeServers")]
        string IPv4OptionsProbeServers { get; set; }

        [DataMember(Name = "IPv6SupportProbability")]
        double IPv6SupportProbability { get; set; }

        [DataMember(Name = "IPv6SupportProbeCount")]
        byte IPv6SupportProbeCount { get; set; }

        [DataMember(Name = "IPv6SupportProbePort")]
        ushort IPv6SupportProbePort { get; set; }

        [DataMember(Name = "IPv6SupportProbeServers")]
        string IPv6SupportProbeServers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class NetworkTestingDynamicConfig {\n");
            sb.Append("  IPv4OptionsProbability: ").Append(IPv4OptionsProbability).Append("\n");
            sb.Append("  IPv4OptionsProbeCount: ").Append(IPv4OptionsProbeCount).Append("\n");
            sb.Append("  IPv4OptionsProbePort: ").Append(IPv4OptionsProbePort).Append("\n");
            sb.Append("  IPv4OptionsProbeServers: ").Append(IPv4OptionsProbeServers).Append("\n");
            sb.Append("  IPv6SupportProbability: ").Append(IPv6SupportProbability).Append("\n");
            sb.Append("  IPv6SupportProbeCount: ").Append(IPv6SupportProbeCount).Append("\n");
            sb.Append("  IPv6SupportProbePort: ").Append(IPv6SupportProbePort).Append("\n");
            sb.Append("  IPv6SupportProbeServers: ").Append(IPv6SupportProbeServers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}