using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerMissionDTO
    {
        [DataMember(Name = "backgroundImageUrl")]
        public string BackgroundImageUrl { get; set; }

        [DataMember(Name = "celebrationType")]
        public string CelebrationType { get; set; }

        [DataMember(Name = "completedDate")]
        public long CompletedDate { get; set; }

        [DataMember(Name = "cooldownTimeMillis")]
        public long CooldownTimeMillis { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "displayType")]
        public string DisplayType { get; set; }

        [DataMember(Name = "endTime")]
        public long EndTime { get; set; }

        [DataMember(Name = "expiringWarnings")]
        public MissionAlertDTO[] ExpiringWarnings { get; set; }

        [DataMember(Name = "helperText")]
        public string HelperText { get; set; }

        [DataMember(Name = "iconImageUrl")]
        public string IconImageUrl { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "internalName")]
        public string InternalName { get; set; }

        [DataMember(Name = "isNew")]
        public bool IsNew { get; set; }

        [DataMember(Name = "lastUpdatedTimestamp")]
        public long LastUpdatedTimestamp { get; set; }

        [DataMember(Name = "locale")]
        public string Locale { get; set; }

        [DataMember(Name = "missionType")]
        public string MissionType { get; set; }

        [DataMember(Name = "objectives")]
        public PlayerMissionObjectiveDTO[] Objectives { get; set; }

        [DataMember(Name = "requirements")]
        public MissionRequirementDTO[] Requirements { get; set; }

        [DataMember(Name = "rewards")]
        public PlayerMissionRewardDTO[] Rewards { get; set; }

        [DataMember(Name = "seriesName")]
        public string SeriesName { get; set; }

        [DataMember(Name = "startTime")]
        public long StartTime { get; set; }

        [DataMember(Name = "status")]
        public string Status { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        [DataMember(Name = "viewed")]
        public bool Viewed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMissionDTO {\n");
            sb.Append("  BackgroundImageUrl: ").Append(BackgroundImageUrl).Append("\n");
            sb.Append("  CelebrationType: ").Append(CelebrationType).Append("\n");
            sb.Append("  CompletedDate: ").Append(CompletedDate).Append("\n");
            sb.Append("  CooldownTimeMillis: ").Append(CooldownTimeMillis).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DisplayType: ").Append(DisplayType).Append("\n");
            sb.Append("  EndTime: ").Append(EndTime).Append("\n");
            sb.Append("  ExpiringWarnings: ").Append(ExpiringWarnings).Append("\n");
            sb.Append("  HelperText: ").Append(HelperText).Append("\n");
            sb.Append("  IconImageUrl: ").Append(IconImageUrl).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  IsNew: ").Append(IsNew).Append("\n");
            sb.Append("  LastUpdatedTimestamp: ").Append(LastUpdatedTimestamp).Append("\n");
            sb.Append("  Locale: ").Append(Locale).Append("\n");
            sb.Append("  MissionType: ").Append(MissionType).Append("\n");
            sb.Append("  Objectives: ").Append(Objectives).Append("\n");
            sb.Append("  Requirements: ").Append(Requirements).Append("\n");
            sb.Append("  Rewards: ").Append(Rewards).Append("\n");
            sb.Append("  SeriesName: ").Append(SeriesName).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Viewed: ").Append(Viewed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}