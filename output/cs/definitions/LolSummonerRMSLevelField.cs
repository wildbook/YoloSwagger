using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerRMSLevelField {
    [DataMember(Name = "finalLevel")]
    uint FinalLevel {get; set;}

    [DataMember(Name = "progress")]
    LolSummonerRMSLevelProgression Progress {get; set;}

    [DataMember(Name = "initialLevel")]
    uint InitialLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerRMSLevelField {\n");
      sb.Append("  FinalLevel: ").Append(FinalLevel).Append("\n");
      sb.Append("  Progress: ").Append(Progress).Append("\n");
      sb.Append("  InitialLevel: ").Append(InitialLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}