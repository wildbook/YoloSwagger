using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSummonerSummonerRequestedName {
    [DataMember(Name = "name")]
    string Name {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSummonerSummonerRequestedName {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}