using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PatcherComponentStateProgress {
    [DataMember(Name = "bytesPerSecond")]
    double BytesPerSecond {get; set;}

    [DataMember(Name = "bytesComplete")]
    ulong BytesComplete {get; set;}

    [DataMember(Name = "bytesRequired")]
    ulong BytesRequired {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PatcherComponentStateProgress {\n");
      sb.Append("  BytesPerSecond: ").Append(BytesPerSecond).Append("\n");
      sb.Append("  BytesComplete: ").Append(BytesComplete).Append("\n");
      sb.Append("  BytesRequired: ").Append(BytesRequired).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}