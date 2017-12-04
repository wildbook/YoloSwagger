using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryRune {
    [DataMember(Name = "runeId")]
    ushort RuneId {get; set;}

    [DataMember(Name = "rank")]
    ushort Rank {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryRune {\n");
      sb.Append("  RuneId: ").Append(RuneId).Append("\n");
      sb.Append("  Rank: ").Append(Rank).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}