using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LeagueTierAndRankDTO {
    [DataMember(Name = "tier")]
    LeaguesLcdsLeagueTier Tier {get; set;}

    [DataMember(Name = "playerOrTeamName")]
    string PlayerOrTeamName {get; set;}

    [DataMember(Name = "queueType")]
    LeaguesLcdsQueueType QueueType {get; set;}

    [DataMember(Name = "rank")]
    LeaguesLcdsLeagueRank Rank {get; set;}

    [DataMember(Name = "playerOrTeamId")]
    string PlayerOrTeamId {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LeagueTierAndRankDTO {\n");
      sb.Append("  Tier: ").Append(Tier).Append("\n");
      sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
      sb.Append("  QueueType: ").Append(QueueType).Append("\n");
      sb.Append("  Rank: ").Append(Rank).Append("\n");
      sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}