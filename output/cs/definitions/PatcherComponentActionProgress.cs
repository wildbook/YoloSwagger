using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PatcherComponentActionProgress {
    [DataMember(Name = "currentItem")]
    string CurrentItem {get; set;}

    [DataMember(Name = "primaryWork")]
    PatcherComponentStateWorkType PrimaryWork {get; set;}

    [DataMember(Name = "total")]
    PatcherComponentStateProgress Total {get; set;}

    [DataMember(Name = "network")]
    PatcherComponentStateProgress Network {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PatcherComponentActionProgress {\n");
      sb.Append("  CurrentItem: ").Append(CurrentItem).Append("\n");
      sb.Append("  PrimaryWork: ").Append(PrimaryWork).Append("\n");
      sb.Append("  Total: ").Append(Total).Append("\n");
      sb.Append("  Network: ").Append(Network).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}