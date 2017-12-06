using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    // User Experience Settings System Information
    [DataContract]
    struct BasicSystemInfo
    {
        [DataMember(Name = "operatingSystem")]
        BasicOperatingSystemInfo OperatingSystem { get; set; }

        [DataMember(Name = "physicalMemory")]
        ulong PhysicalMemory { get; set; }

        [DataMember(Name = "physicalProcessorCores")]
        uint PhysicalProcessorCores { get; set; }

        [DataMember(Name = "processorSpeed")]
        uint ProcessorSpeed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BasicSystemInfo {\n");
            sb.Append("  OperatingSystem: ").Append(OperatingSystem).Append("\n");
            sb.Append("  PhysicalMemory: ").Append(PhysicalMemory).Append("\n");
            sb.Append("  PhysicalProcessorCores: ").Append(PhysicalProcessorCores).Append("\n");
            sb.Append("  ProcessorSpeed: ").Append(ProcessorSpeed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}