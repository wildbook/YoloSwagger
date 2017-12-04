using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEndOfGameChampionMasteryGrade {
    [DataMember(Name = "grade")]
    string Grade {get; set;}

    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEndOfGameChampionMasteryGrade {\n");
      sb.Append("  Grade: ").Append(Grade).Append("\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}