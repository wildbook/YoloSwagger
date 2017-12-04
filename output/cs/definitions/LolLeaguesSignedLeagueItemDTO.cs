using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolLeaguesSignedLeagueItemDTO {
    [DataMember(Name = "inactivityStatus")]
    string InactivityStatus {get; set;}

    [DataMember(Name = "previousDayLeaguePosition")]
    ulong PreviousDayLeaguePosition {get; set;}

    [DataMember(Name = "rank")]
    LeaguesLcdsLeagueRank Rank {get; set;}

    [DataMember(Name = "queueType")]
    LeaguesLcdsQueueType QueueType {get; set;}

    [DataMember(Name = "hotStreak")]
    bool HotStreak {get; set;}

    [DataMember(Name = "miniSeries")]
    LeaguesLcdsMiniSeriesDTO MiniSeries {get; set;}

    [DataMember(Name = "apexDaysUntilDecay")]
    int ApexDaysUntilDecay {get; set;}

    [DataMember(Name = "veteran")]
    bool Veteran {get; set;}

    [DataMember(Name = "losses")]
    ulong Losses {get; set;}

    [DataMember(Name = "jwt")]
    string Jwt {get; set;}

    [DataMember(Name = "freshBlood")]
    bool FreshBlood {get; set;}

    [DataMember(Name = "timeUntilInactivityStatusChanges")]
    ulong TimeUntilInactivityStatusChanges {get; set;}

    [DataMember(Name = "playerOrTeamName")]
    string PlayerOrTeamName {get; set;}

    [DataMember(Name = "inactive")]
    bool Inactive {get; set;}

    [DataMember(Name = "playerOrTeamId")]
    string PlayerOrTeamId {get; set;}

    [DataMember(Name = "demotionWarning")]
    ulong DemotionWarning {get; set;}

    [DataMember(Name = "wins")]
    ulong Wins {get; set;}

    [DataMember(Name = "tier")]
    LeaguesLcdsLeagueTier Tier {get; set;}

    [DataMember(Name = "displayDecayWarning")]
    bool DisplayDecayWarning {get; set;}

    [DataMember(Name = "leaguePoints")]
    int LeaguePoints {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolLeaguesSignedLeagueItemDTO {\n");
      sb.Append("  InactivityStatus: ").Append(InactivityStatus).Append("\n");
      sb.Append("  PreviousDayLeaguePosition: ").Append(PreviousDayLeaguePosition).Append("\n");
      sb.Append("  Rank: ").Append(Rank).Append("\n");
      sb.Append("  QueueType: ").Append(QueueType).Append("\n");
      sb.Append("  HotStreak: ").Append(HotStreak).Append("\n");
      sb.Append("  MiniSeries: ").Append(MiniSeries).Append("\n");
      sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
      sb.Append("  Veteran: ").Append(Veteran).Append("\n");
      sb.Append("  Losses: ").Append(Losses).Append("\n");
      sb.Append("  Jwt: ").Append(Jwt).Append("\n");
      sb.Append("  FreshBlood: ").Append(FreshBlood).Append("\n");
      sb.Append("  TimeUntilInactivityStatusChanges: ").Append(TimeUntilInactivityStatusChanges).Append("\n");
      sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
      sb.Append("  Inactive: ").Append(Inactive).Append("\n");
      sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
      sb.Append("  DemotionWarning: ").Append(DemotionWarning).Append("\n");
      sb.Append("  Wins: ").Append(Wins).Append("\n");
      sb.Append("  Tier: ").Append(Tier).Append("\n");
      sb.Append("  DisplayDecayWarning: ").Append(DisplayDecayWarning).Append("\n");
      sb.Append("  LeaguePoints: ").Append(LeaguePoints).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}