using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryRow {
    [DataMember(Name = "masteries")]
    uint[] Masteries {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsGameDataChampionMasteryRow {\n");
      sb.Append("  Masteries: ").Append(Masteries).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}