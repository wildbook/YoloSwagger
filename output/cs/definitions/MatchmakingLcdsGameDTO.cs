using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct MatchmakingLcdsGameDTO {
    [DataMember(Name = "teamTwo")]
    MatchmakingLcdsPlayerParticipant[] TeamTwo {get; set;}

    [DataMember(Name = "statusOfParticipants")]
    string StatusOfParticipants {get; set;}

    [DataMember(Name = "gameState")]
    string GameState {get; set;}

    [DataMember(Name = "terminatedCondition")]
    string TerminatedCondition {get; set;}

    [DataMember(Name = "teamOne")]
    MatchmakingLcdsPlayerParticipant[] TeamOne {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class MatchmakingLcdsGameDTO {\n");
      sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
      sb.Append("  StatusOfParticipants: ").Append(StatusOfParticipants).Append("\n");
      sb.Append("  GameState: ").Append(GameState).Append("\n");
      sb.Append("  TerminatedCondition: ").Append(TerminatedCondition).Append("\n");
      sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}