using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryMastery {
    [DataMember(Name = "masteryId")]
    ushort MasteryId {get; set;}

    [DataMember(Name = "rank")]
    ushort Rank {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryMastery {\n");
      sb.Append("  MasteryId: ").Append(MasteryId).Append("\n");
      sb.Append("  Rank: ").Append(Rank).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}