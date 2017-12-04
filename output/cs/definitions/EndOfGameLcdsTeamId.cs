using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct EndOfGameLcdsTeamId {
    [DataMember(Name = "fullId")]
    string FullId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class EndOfGameLcdsTeamId {\n");
      sb.Append("  FullId: ").Append(FullId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}