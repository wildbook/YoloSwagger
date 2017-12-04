using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerRMSLevelProgression {
    [DataMember(Name = "initialLevelBoundary")]
    ulong InitialLevelBoundary {get; set;}

    [DataMember(Name = "initialXp")]
    ulong InitialXp {get; set;}

    [DataMember(Name = "finalLevelBoundary")]
    ulong FinalLevelBoundary {get; set;}

    [DataMember(Name = "finalXp")]
    ulong FinalXp {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerRMSLevelProgression {\n");
      sb.Append("  InitialLevelBoundary: ").Append(InitialLevelBoundary).Append("\n");
      sb.Append("  InitialXp: ").Append(InitialXp).Append("\n");
      sb.Append("  FinalLevelBoundary: ").Append(FinalLevelBoundary).Append("\n");
      sb.Append("  FinalXp: ").Append(FinalXp).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}