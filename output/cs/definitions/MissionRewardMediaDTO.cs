using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MissionRewardMediaDTO {
    [DataMember(Name = "outro")]
    MissionRewardMediaItemDTO Outro {get; set;}

    [DataMember(Name = "intro")]
    MissionRewardMediaItemDTO Intro {get; set;}

    [DataMember(Name = "loop")]
    MissionRewardMediaItemDTO Loop {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MissionRewardMediaDTO {\n");
      sb.Append("  Outro: ").Append(Outro).Append("\n");
      sb.Append("  Intro: ").Append(Intro).Append("\n");
      sb.Append("  Loop: ").Append(Loop).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}