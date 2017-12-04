using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct TournamentDTO {
    [DataMember(Name = "queueId")]
    int QueueId {get; set;}

    [DataMember(Name = "phases")]
    TournamentPhaseDTO[] Phases {get; set;}

    [DataMember(Name = "buyInOptions")]
    int[] BuyInOptions {get; set;}

    [DataMember(Name = "themeId")]
    int ThemeId {get; set;}

    [DataMember(Name = "nameLocKey")]
    string NameLocKey {get; set;}

    [DataMember(Name = "rosterCreateDeadline")]
    long RosterCreateDeadline {get; set;}

    [DataMember(Name = "rewardConfig")]
    ClashRewardConfigClient[] RewardConfig {get; set;}

    [DataMember(Name = "scheduleTime")]
    long ScheduleTime {get; set;}

    [DataMember(Name = "maxSub")]
    int MaxSub {get; set;}

    [DataMember(Name = "scoutingTimeMs")]
    long ScoutingTimeMs {get; set;}

    [DataMember(Name = "entryFee")]
    int EntryFee {get; set;}

    [DataMember(Name = "rosterDisbandDeadline")]
    long RosterDisbandDeadline {get; set;}

    [DataMember(Name = "rosterSize")]
    int RosterSize {get; set;}

    [DataMember(Name = "id")]
    long Id {get; set;}

    [DataMember(Name = "scheduleEndTime")]
    long ScheduleEndTime {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class TournamentDTO {\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
      sb.Append("  Phases: ").Append(Phases).Append("\n");
      sb.Append("  BuyInOptions: ").Append(BuyInOptions).Append("\n");
      sb.Append("  ThemeId: ").Append(ThemeId).Append("\n");
      sb.Append("  NameLocKey: ").Append(NameLocKey).Append("\n");
      sb.Append("  RosterCreateDeadline: ").Append(RosterCreateDeadline).Append("\n");
      sb.Append("  RewardConfig: ").Append(RewardConfig).Append("\n");
      sb.Append("  ScheduleTime: ").Append(ScheduleTime).Append("\n");
      sb.Append("  MaxSub: ").Append(MaxSub).Append("\n");
      sb.Append("  ScoutingTimeMs: ").Append(ScoutingTimeMs).Append("\n");
      sb.Append("  EntryFee: ").Append(EntryFee).Append("\n");
      sb.Append("  RosterDisbandDeadline: ").Append(RosterDisbandDeadline).Append("\n");
      sb.Append("  RosterSize: ").Append(RosterSize).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  ScheduleEndTime: ").Append(ScheduleEndTime).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}