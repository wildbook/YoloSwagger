using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  // User Experience Settings Operating System Information
  [DataContract]  struct BasicOperatingSystemInfo {
    [DataMember(Name = "edition")]
    string Edition {get; set;}

    [DataMember(Name = "versionMinor")]
    string VersionMinor {get; set;}

    [DataMember(Name = "versionMajor")]
    string VersionMajor {get; set;}

    [DataMember(Name = "platform")]
    string Platform {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class BasicOperatingSystemInfo {\n");
      sb.Append("  Edition: ").Append(Edition).Append("\n");
      sb.Append("  VersionMinor: ").Append(VersionMinor).Append("\n");
      sb.Append("  VersionMajor: ").Append(VersionMajor).Append("\n");
      sb.Append("  Platform: ").Append(Platform).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}