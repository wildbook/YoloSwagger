using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RankedScoutingMemberDTO {
    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "championScoutingData")]
    RankedScoutingTopChampionDTO[] ChampionScoutingData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RankedScoutingMemberDTO {\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  ChampionScoutingData: ").Append(ChampionScoutingData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}