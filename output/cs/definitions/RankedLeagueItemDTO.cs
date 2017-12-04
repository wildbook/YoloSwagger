using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct RankedLeagueItemDTO {
    [DataMember(Name = "queueType")]
    LolRankedStatsRankedQueue QueueType {get; set;}

    [DataMember(Name = "miniSeries")]
    RankedLeagueMiniSeriesDTO MiniSeries {get; set;}

    [DataMember(Name = "apexDaysUntilDecay")]
    int ApexDaysUntilDecay {get; set;}

    [DataMember(Name = "playerOrTeamId")]
    string PlayerOrTeamId {get; set;}

    [DataMember(Name = "loses")]
    uint Loses {get; set;}

    [DataMember(Name = "tier")]
    LolRankedStatsRankedTier Tier {get; set;}

    [DataMember(Name = "playerOrTeamName")]
    string PlayerOrTeamName {get; set;}

    [DataMember(Name = "inactive")]
    bool Inactive {get; set;}

    [DataMember(Name = "rank")]
    RankedDivision Rank {get; set;}

    [DataMember(Name = "wins")]
    uint Wins {get; set;}

    [DataMember(Name = "leagueName")]
    string LeagueName {get; set;}

    [DataMember(Name = "leaguePoints")]
    int LeaguePoints {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class RankedLeagueItemDTO {\n");
      sb.Append("  QueueType: ").Append(QueueType).Append("\n");
      sb.Append("  MiniSeries: ").Append(MiniSeries).Append("\n");
      sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
      sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
      sb.Append("  Loses: ").Append(Loses).Append("\n");
      sb.Append("  Tier: ").Append(Tier).Append("\n");
      sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
      sb.Append("  Inactive: ").Append(Inactive).Append("\n");
      sb.Append("  Rank: ").Append(Rank).Append("\n");
      sb.Append("  Wins: ").Append(Wins).Append("\n");
      sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
      sb.Append("  LeaguePoints: ").Append(LeaguePoints).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}