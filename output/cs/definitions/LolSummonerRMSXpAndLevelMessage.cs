using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerRMSXpAndLevelMessage {
    [DataMember(Name = "xp")]
    dynamic Xp {get; set;}

    [DataMember(Name = "level")]
    LolSummonerRMSLevelField Level {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerRMSXpAndLevelMessage {\n");
      sb.Append("  Xp: ").Append(Xp).Append("\n");
      sb.Append("  Level: ").Append(Level).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}