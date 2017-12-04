using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PhaseRosterSubDTO {
    [DataMember(Name = "replacedPlayerId")]
    ulong ReplacedPlayerId {get; set;}

    [DataMember(Name = "subState")]
    SubState SubState {get; set;}

    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "pay")]
    int Pay {get; set;}

    [DataMember(Name = "position")]
    Position Position {get; set;}

    [DataMember(Name = "bet")]
    int Bet {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PhaseRosterSubDTO {\n");
      sb.Append("  ReplacedPlayerId: ").Append(ReplacedPlayerId).Append("\n");
      sb.Append("  SubState: ").Append(SubState).Append("\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  Pay: ").Append(Pay).Append("\n");
      sb.Append("  Position: ").Append(Position).Append("\n");
      sb.Append("  Bet: ").Append(Bet).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}