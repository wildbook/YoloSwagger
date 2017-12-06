using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeagueNotificationItem
    {
        [DataMember(Name = "demotionWarning")]
        long DemotionWarning { get; set; }

        [DataMember(Name = "displayDecayWarning")]
        bool DisplayDecayWarning { get; set; }

        [DataMember(Name = "emblems")]
        LolLeaguesLeagueEmblem[] Emblems { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "inactive")]
        bool Inactive { get; set; }

        [DataMember(Name = "inactivityStatus")]
        string InactivityStatus { get; set; }

        [DataMember(Name = "lastPlayed")]
        ulong LastPlayed { get; set; }

        [DataMember(Name = "leagueName")]
        string LeagueName { get; set; }

        [DataMember(Name = "leaguePointsDelta")]
        long LeaguePointsDelta { get; set; }

        [DataMember(Name = "losses")]
        ulong Losses { get; set; }

        [DataMember(Name = "minGamesForSeeding")]
        long MinGamesForSeeding { get; set; }

        [DataMember(Name = "miniseriesResults")]
        LolLeaguesMiniseries[] MiniseriesResults { get; set; }

        [DataMember(Name = "miniseriesTimeLeftToPlayMillis")]
        ulong MiniseriesTimeLeftToPlayMillis { get; set; }

        [DataMember(Name = "miniseriesWins")]
        ulong MiniseriesWins { get; set; }

        [DataMember(Name = "notifyReason")]
        string NotifyReason { get; set; }

        [DataMember(Name = "playerOrTeamId")]
        string PlayerOrTeamId { get; set; }

        [DataMember(Name = "playerOrTeamName")]
        string PlayerOrTeamName { get; set; }

        [DataMember(Name = "points")]
        long Points { get; set; }

        [DataMember(Name = "previousPosition")]
        ulong PreviousPosition { get; set; }

        [DataMember(Name = "queueType")]
        string QueueType { get; set; }

        [DataMember(Name = "rank")]
        string Rank { get; set; }

        [DataMember(Name = "seasonEndApexPosition")]
        ulong SeasonEndApexPosition { get; set; }

        [DataMember(Name = "seasonEndRank")]
        string SeasonEndRank { get; set; }

        [DataMember(Name = "seasonEndTier")]
        string SeasonEndTier { get; set; }

        [DataMember(Name = "tier")]
        string Tier { get; set; }

        [DataMember(Name = "timeLastDecayMessageShown")]
        ulong TimeLastDecayMessageShown { get; set; }

        [DataMember(Name = "timeUntilDecay")]
        long TimeUntilDecay { get; set; }

        [DataMember(Name = "timeUntilInactivityStatusChanges")]
        ulong TimeUntilInactivityStatusChanges { get; set; }

        [DataMember(Name = "totalPlayed")]
        ulong TotalPlayed { get; set; }

        [DataMember(Name = "wins")]
        ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueNotificationItem {\n");
            sb.Append("  DemotionWarning: ").Append(DemotionWarning).Append("\n");
            sb.Append("  DisplayDecayWarning: ").Append(DisplayDecayWarning).Append("\n");
            sb.Append("  Emblems: ").Append(Emblems).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Inactive: ").Append(Inactive).Append("\n");
            sb.Append("  InactivityStatus: ").Append(InactivityStatus).Append("\n");
            sb.Append("  LastPlayed: ").Append(LastPlayed).Append("\n");
            sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
            sb.Append("  LeaguePointsDelta: ").Append(LeaguePointsDelta).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  MinGamesForSeeding: ").Append(MinGamesForSeeding).Append("\n");
            sb.Append("  MiniseriesResults: ").Append(MiniseriesResults).Append("\n");
            sb.Append("  MiniseriesTimeLeftToPlayMillis: ").Append(MiniseriesTimeLeftToPlayMillis).Append("\n");
            sb.Append("  MiniseriesWins: ").Append(MiniseriesWins).Append("\n");
            sb.Append("  NotifyReason: ").Append(NotifyReason).Append("\n");
            sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
            sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
            sb.Append("  Points: ").Append(Points).Append("\n");
            sb.Append("  PreviousPosition: ").Append(PreviousPosition).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  SeasonEndApexPosition: ").Append(SeasonEndApexPosition).Append("\n");
            sb.Append("  SeasonEndRank: ").Append(SeasonEndRank).Append("\n");
            sb.Append("  SeasonEndTier: ").Append(SeasonEndTier).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  TimeLastDecayMessageShown: ").Append(TimeLastDecayMessageShown).Append("\n");
            sb.Append("  TimeUntilDecay: ").Append(TimeUntilDecay).Append("\n");
            sb.Append("  TimeUntilInactivityStatusChanges: ").Append(TimeUntilInactivityStatusChanges).Append("\n");
            sb.Append("  TotalPlayed: ").Append(TotalPlayed).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}