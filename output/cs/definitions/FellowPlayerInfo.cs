using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct FellowPlayerInfo {
    [DataMember(Name = "teamId")]
    ulong TeamId {get; set;}

    [DataMember(Name = "championId")]
    ulong ChampionId {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class FellowPlayerInfo {\n");
      sb.Append("  TeamId: ").Append(TeamId).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}