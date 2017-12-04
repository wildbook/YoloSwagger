using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MatchmakingLcdsPlayerParticipant {
    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MatchmakingLcdsPlayerParticipant {\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}