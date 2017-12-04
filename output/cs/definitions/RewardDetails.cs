using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RewardDetails {
    [DataMember(Name = "rosterId")]
    long RosterId {get; set;}

    [DataMember(Name = "teamMemberIds")]
    long[] TeamMemberIds {get; set;}

    [DataMember(Name = "tournamentId")]
    long TournamentId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RewardDetails {\n");
      sb.Append("  RosterId: ").Append(RosterId).Append("\n");
      sb.Append("  TeamMemberIds: ").Append(TeamMemberIds).Append("\n");
      sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}