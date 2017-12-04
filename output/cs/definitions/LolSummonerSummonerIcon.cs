using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerSummonerIcon {
    [DataMember(Name = "profileIconId")]
    int ProfileIconId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerSummonerIcon {\n");
      sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}