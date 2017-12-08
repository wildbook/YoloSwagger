using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerMissionDTO
    {
        [DataMember(Name = "internalName")]
        string InternalName { get; set; }

        [DataMember(Name = "isNew")]
        bool IsNew { get; set; }

        [DataMember(Name = "locale")]
        string Locale { get; set; }

        [DataMember(Name = "lastUpdatedTimestamp")]
        long LastUpdatedTimestamp { get; set; }

        [DataMember(Name = "completedDate")]
        long CompletedDate { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "viewed")]
        bool Viewed { get; set; }

        [DataMember(Name = "cooldownTimeMillis")]
        long CooldownTimeMillis { get; set; }

        [DataMember(Name = "backgroundImageUrl")]
        string BackgroundImageUrl { get; set; }

        [DataMember(Name = "title")]
        string Title { get; set; }

        [DataMember(Name = "objectives")]
        PlayerMissionObjectiveDTO[] Objectives { get; set; }

        [DataMember(Name = "seriesName")]
        string SeriesName { get; set; }

        [DataMember(Name = "displayType")]
        string DisplayType { get; set; }

        [DataMember(Name = "celebrationType")]
        string CelebrationType { get; set; }

        [DataMember(Name = "status")]
        string Status { get; set; }

        [DataMember(Name = "iconImageUrl")]
        string IconImageUrl { get; set; }

        [DataMember(Name = "rewards")]
        PlayerMissionRewardDTO[] Rewards { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "startTime")]
        long StartTime { get; set; }

        [DataMember(Name = "requirements")]
        MissionRequirementDTO[] Requirements { get; set; }

        [DataMember(Name = "missionType")]
        string MissionType { get; set; }

        [DataMember(Name = "helperText")]
        string HelperText { get; set; }

        [DataMember(Name = "expiringWarnings")]
        MissionAlertDTO[] ExpiringWarnings { get; set; }

        [DataMember(Name = "endTime")]
        long EndTime { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMissionDTO {\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  IsNew: ").Append(IsNew).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  LastUpdatedTimestamp: ").Append(LastUpdatedTimestamp).Append("\n");
            sb.Append("  CompletedDate: ").Append(CompletedDate).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Viewed: ").Append(Viewed).Append("\n");
            sb.Append("  CooldownTimeMillis: ").Append(CooldownTimeMillis).Append("\n");
            sb.Append("  BackgroundImageUrl: ").Append(BackgroundImageUrl).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Objectives: ").Append(Objectives).Append("\n");
            sb.Append("  SeriesName: ").Append(SeriesName).Append("\n");
            sb.Append("  DisplayType: ").Append(DisplayType).Append("\n");
            sb.Append("  CelebrationType: ").Append(CelebrationType).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  IconImageUrl: ").Append(IconImageUrl).Append("\n");
            sb.Append("  Rewards: ").Append(Rewards).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  Requirements: ").Append(Requirements).Append("\n");
            sb.Append("  MissionType: ").Append(MissionType).Append("\n");
            sb.Append("  HelperText: ").Append(HelperText).Append("\n");
            sb.Append("  ExpiringWarnings: ").Append(ExpiringWarnings).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}