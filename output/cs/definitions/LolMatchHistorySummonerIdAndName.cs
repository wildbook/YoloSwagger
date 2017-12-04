using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistorySummonerIdAndName {
    [DataMember(Name = "displayName")]
    string DisplayName {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistorySummonerIdAndName {\n");
      sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}