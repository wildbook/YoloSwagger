using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteries {
    [DataMember(Name = "tree")]
    LolCollectionsGameDataChampionMasteryTree Tree {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolCollectionsGameDataChampionMasteries {\n");
      sb.Append("  Tree: ").Append(Tree).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}