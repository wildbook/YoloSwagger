using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolHonorV2HonorConfig {
    [DataMember(Name = "Honor2018Enabled")]
    bool Honor2018Enabled {get; set;}

    [DataMember(Name = "DayOneModalEnabled")]
    bool DayOneModalEnabled {get; set;}

    [DataMember(Name = "Enabled")]
    bool Enabled {get; set;}

    [DataMember(Name = "SecondsToVote")]
    int SecondsToVote {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolHonorV2HonorConfig {\n");
      sb.Append("  Honor2018Enabled: ").Append(Honor2018Enabled).Append("\n");
      sb.Append("  DayOneModalEnabled: ").Append(DayOneModalEnabled).Append("\n");
      sb.Append("  Enabled: ").Append(Enabled).Append("\n");
      sb.Append("  SecondsToVote: ").Append(SecondsToVote).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}