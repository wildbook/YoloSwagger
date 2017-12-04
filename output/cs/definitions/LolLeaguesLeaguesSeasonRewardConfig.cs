using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLeaguesLeaguesSeasonRewardConfig {
    [DataMember(Name = "QualificationWarningEnabled")]
    bool QualificationWarningEnabled {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLeaguesLeaguesSeasonRewardConfig {\n");
      sb.Append("  QualificationWarningEnabled: ").Append(QualificationWarningEnabled).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}