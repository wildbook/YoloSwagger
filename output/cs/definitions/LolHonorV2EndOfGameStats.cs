using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2EndOfGameStats
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "difficulty")]
        public string Difficulty { get; set; }

        [DataMember(Name = "gameEndedInEarlySurrender")]
        public bool GameEndedInEarlySurrender { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "gameLength")]
        public int GameLength { get; set; }

        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutators")]
        public string[] GameMutators { get; set; }

        [DataMember(Name = "gameType")]
        public string GameType { get; set; }

        [DataMember(Name = "imbalancedTeamsNoPoints")]
        public bool ImbalancedTeamsNoPoints { get; set; }

        [DataMember(Name = "invalid")]
        public bool Invalid { get; set; }

        [DataMember(Name = "myTeamStatus")]
        public string MyTeamStatus { get; set; }

        [DataMember(Name = "queueType")]
        public string QueueType { get; set; }

        [DataMember(Name = "ranked")]
        public bool Ranked { get; set; }

        [DataMember(Name = "reportGameId")]
        public ulong ReportGameId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "teams")]
        public LolHonorV2EndOfGameTeam[] Teams { get; set; }

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