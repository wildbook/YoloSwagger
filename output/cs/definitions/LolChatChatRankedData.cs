using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChatChatRankedData {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "rankedData")]
    LolChatChatRankedEntry[] RankedData {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChatChatRankedData {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  RankedData: ").Append(RankedData).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}