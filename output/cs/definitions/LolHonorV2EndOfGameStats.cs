using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolHonorV2EndOfGameStats
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "difficulty")]
        string Difficulty { get; set; }

        [DataMember(Name = "gameEndedInEarlySurrender")]
        bool GameEndedInEarlySurrender { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "gameLength")]
        int GameLength { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "gameMutators")]
        string[] GameMutators { get; set; }

        [DataMember(Name = "gameType")]
        string GameType { get; set; }

        [DataMember(Name = "imbalancedTeamsNoPoints")]
        bool ImbalancedTeamsNoPoints { get; set; }

        [DataMember(Name = "invalid")]
        bool Invalid { get; set; }

        [DataMember(Name = "myTeamStatus")]
        string MyTeamStatus { get; set; }

        [DataMember(Name = "queueType")]
        string QueueType { get; set; }

        [DataMember(Name = "ranked")]
        bool Ranked { get; set; }

        [DataMember(Name = "reportGameId")]
        ulong ReportGameId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        [DataMember(Name = "teams")]
        LolHonorV2EndOfGameTeam[] Teams { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2EndOfGameStats {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Difficulty: ").Append(Difficulty).Append("\n");
            sb.Append("  GameEndedInEarlySurrender: ").Append(GameEndedInEarlySurrender).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GameLength: ").Append(GameLength).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  ImbalancedTeamsNoPoints: ").Append(ImbalancedTeamsNoPoints).Append("\n");
            sb.Append("  Invalid: ").Append(Invalid).Append("\n");
            sb.Append("  MyTeamStatus: ").Append(MyTeamStatus).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Ranked: ").Append(Ranked).Append("\n");
            sb.Append("  ReportGameId: ").Append(ReportGameId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  Teams: ").Append(Teams).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}