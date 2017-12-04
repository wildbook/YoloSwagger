using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersQueue {
    [DataMember(Name = "id")]
    int Id {get; set;}

    [DataMember(Name = "minLevel")]
    uint MinLevel {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolSuggestedPlayersSuggestedPlayersQueue {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  MinLevel: ").Append(MinLevel).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}