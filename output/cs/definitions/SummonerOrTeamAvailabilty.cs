using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SummonerOrTeamAvailabilty {
    [DataMember(Name = "availableForWatching")]
    string[] AvailableForWatching {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SummonerOrTeamAvailabilty {\n");
      sb.Append("  AvailableForWatching: ").Append(AvailableForWatching).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}