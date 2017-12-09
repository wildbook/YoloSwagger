using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesSignedLeagueItemDTO
    {
        [DataMember(Name = "apexDaysUntilDecay")]
        public int ApexDaysUntilDecay { get; set; }

        [DataMember(Name = "demotionWarning")]
        public ulong DemotionWarning { get; set; }

        [DataMember(Name = "displayDecayWarning")]
        public bool DisplayDecayWarning { get; set; }

        [DataMember(Name = "freshBlood")]
        public bool FreshBlood { get; set; }

        [DataMember(Name = "hotStreak")]
        public bool HotStreak { get; set; }

        [DataMember(Name = "inactive")]
        public bool Inactive { get; set; }

        [DataMember(Name = "inactivityStatus")]
        public string InactivityStatus { get; set; }

        [DataMember(Name = "jwt")]
        public string Jwt { get; set; }

        [DataMember(Name = "leaguePoints")]
        public int LeaguePoints { get; set; }

        [DataMember(Name = "losses")]
        public ulong Losses { get; set; }

        [DataMember(Name = "miniSeries")]
        public LeaguesLcdsMiniSeriesDTO MiniSeries { get; set; }

        [DataMember(Name = "playerOrTeamId")]
        public string PlayerOrTeamId { get; set; }

        [DataMember(Name = "playerOrTeamName")]
        public string PlayerOrTeamName { get; set; }

        [DataMember(Name = "previousDayLeaguePosition")]
        public ulong PreviousDayLeaguePosition { get; set; }

        [DataMember(Name = "queueType")]
        public LeaguesLcdsQueueType QueueType { get; set; }

        [DataMember(Name = "rank")]
        public LeaguesLcdsLeagueRank Rank { get; set; }

        [DataMember(Name = "tier")]
        public LeaguesLcdsLeagueTier Tier { get; set; }

        [DataMember(Name = "timeUntilInactivityStatusChanges")]
        public ulong TimeUntilInactivityStatusChanges { get; set; }

        [DataMember(Name = "veteran")]
        public bool Veteran { get; set; }

        [DataMember(Name = "wins")]
        public ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesSignedLeagueItemDTO {\n");
            sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
            sb.Append("  DemotionWarning: ").Append(DemotionWarning).Append("\n");
            sb.Append("  DisplayDecayWarning: ").Append(DisplayDecayWarning).Append("\n");
            sb.Append("  FreshBlood: ").Append(FreshBlood).Append("\n");
            sb.Append("  HotStreak: ").Append(HotStreak).Append("\n");
            sb.Append("  Inactive: ").Append(Inactive).Append("\n");
            sb.Append("  InactivityStatus: ").Append(InactivityStatus).Append("\n");
            sb.Append("  Jwt: ").Append(Jwt).Append("\n");
            sb.Append("  LeaguePoints: ").Append(LeaguePoints).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  MiniSeries: ").Append(MiniSeries).Append("\n");
            sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
            sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
            sb.Append("  PreviousDayLeaguePosition: ").Append(PreviousDayLeaguePosition).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TimeUntilInactivityStatusChanges: ").Append(TimeUntilInactivityStatusChanges).Append("\n");
            sb.Append("  Veteran: ").Append(Veteran).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}