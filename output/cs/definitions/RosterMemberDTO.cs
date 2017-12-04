using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RosterMemberDTO {
    [DataMember(Name = "playerId")]
    ulong PlayerId {get; set;}

    [DataMember(Name = "rosterId")]
    long RosterId {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    [DataMember(Name = "position")]
    Position Position {get; set;}

    [DataMember(Name = "currentBid")]
    int CurrentBid {get; set;}

    [DataMember(Name = "joinTime")]
    long JoinTime {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RosterMemberDTO {\n");
      sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
      sb.Append("  RosterId: ").Append(RosterId).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("  Position: ").Append(Position).Append("\n");
      sb.Append("  CurrentBid: ").Append(CurrentBid).Append("\n");
      sb.Append("  JoinTime: ").Append(JoinTime).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}