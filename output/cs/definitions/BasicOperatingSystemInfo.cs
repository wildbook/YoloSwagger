using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    // User Experience Settings Operating System Information
    [DataContract]
    public struct BasicOperatingSystemInfo
    {
        [DataMember(Name = "edition")]
        public string Edition { get; set; }

        [DataMember(Name = "platform")]
        public string Platform { get; set; }

        [DataMember(Name = "versionMajor")]
        public string VersionMajor { get; set; }

        [DataMember(Name = "versionMinor")]
        public string VersionMinor { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BasicOperatingSystemInfo {\n");
            sb.Append("  Edition: ").Append(Edition).Append("\n");
            sb.Append("  Platform: ").Append(Platform).Append("\n");
            sb.Append("  VersionMajor: ").Append(VersionMajor).Append("\n");
            sb.Append("  VersionMinor: ").Append(VersionMinor).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}