using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftPFTEndOfGameStats
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "basePoints")]
        public int BasePoints { get; set; }

        [DataMember(Name = "battleBoostIpEarned")]
        public int BattleBoostIpEarned { get; set; }

        [DataMember(Name = "boostIpEarned")]
        public int BoostIpEarned { get; set; }

        [DataMember(Name = "boostXpEarned")]
        public int BoostXpEarned { get; set; }

        [DataMember(Name = "causedEarlySurrender")]
        public bool CausedEarlySurrender { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "coOpVsAiMinutesLeftToday")]
        public int CoOpVsAiMinutesLeftToday { get; set; }

        [DataMember(Name = "coOpVsAiMsecsUntilReset")]
        public int CoOpVsAiMsecsUntilReset { get; set; }

        [DataMember(Name = "completionBonusPoints")]
        public int CompletionBonusPoints { get; set; }

        [DataMember(Name = "customMinutesLeftToday")]
        public int CustomMinutesLeftToday { get; set; }

        [DataMember(Name = "customMsecsUntilReset")]
        public int CustomMsecsUntilReset { get; set; }

        [DataMember(Name = "difficulty")]
        public string Difficulty { get; set; }

        [DataMember(Name = "earlySurrenderAccomplice")]
        public bool EarlySurrenderAccomplice { get; set; }

        [DataMember(Name = "elo")]
        public int Elo { get; set; }

        [DataMember(Name = "eloChange")]
        public int EloChange { get; set; }

        [DataMember(Name = "experienceEarned")]
        public int ExperienceEarned { get; set; }

        [DataMember(Name = "experienceTotal")]
        public int ExperienceTotal { get; set; }

        [DataMember(Name = "firstWinBonus")]
        public int FirstWinBonus { get; set; }

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

        [DataMember(Name = "ipEarned")]
        public int IpEarned { get; set; }

        [DataMember(Name = "ipTotal")]
        public int IpTotal { get; set; }

        [DataMember(Name = "isAramGame")]
        public bool IsAramGame { get; set; }

        [DataMember(Name = "leveledUp")]
        public bool LeveledUp { get; set; }

        [DataMember(Name = "loyaltyBoostIpEarned")]
        public int LoyaltyBoostIpEarned { get; set; }

        [DataMember(Name = "loyaltyBoostXpEarned")]
        public int LoyaltyBoostXpEarned { get; set; }

        [DataMember(Name = "myTeamStatus")]
        public string MyTeamStatus { get; set; }

        [DataMember(Name = "newSpells")]
        public int[] NewSpells { get; set; }

        [DataMember(Name = "odinBonusIp")]
        public int OdinBonusIp { get; set; }

        [DataMember(Name = "partyRewardsBonusIpEarned")]
        public int PartyRewardsBonusIpEarned { get; set; }

        [DataMember(Name = "pointsPenalties")]
        public dynamic PointsPenalties { get; set; }

        [DataMember(Name = "previousLevel")]
        public ulong PreviousLevel { get; set; }

        [DataMember(Name = "previousXpTotal")]
        public ulong PreviousXpTotal { get; set; }

        [DataMember(Name = "queueBonusEarned")]
        public int QueueBonusEarned { get; set; }

        [DataMember(Name = "queueType")]
        public string QueueType { get; set; }

        [DataMember(Name = "ranked")]
        public bool Ranked { get; set; }

        [DataMember(Name = "reportGameId")]
        public ulong ReportGameId { get; set; }

        [DataMember(Name = "rerollData")]
        public LolPftPFTEndOfGamePoints RerollData { get; set; }

        [DataMember(Name = "roomName")]
        public string RoomName { get; set; }

        [DataMember(Name = "roomPassword")]
        public string RoomPassword { get; set; }

        [DataMember(Name = "rpEarned")]
        public int RpEarned { get; set; }

        [DataMember(Name = "sendStatsToTournamentProvider")]
        public bool SendStatsToTournamentProvider { get; set; }

        [DataMember(Name = "skinId")]
        public int SkinId { get; set; }

        [DataMember(Name = "skinIndex")]
        public int SkinIndex { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        [DataMember(Name = "talentPointsGained")]
        public int TalentPointsGained { get; set; }

        [DataMember(Name = "teamEarlySurrendered")]
        public bool TeamEarlySurrendered { get; set; }

        [DataMember(Name = "teams")]
        public LolPftPFTEndOfGameTeam[] Teams { get; set; }

        [DataMember(Name = "timeUntilNextFirstWinBonus")]
        public int TimeUntilNextFirstWinBonus { get; set; }

        [DataMember(Name = "userId")]
        public ulong UserId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTEndOfGameStats {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  BasePoints: ").Append(BasePoints).Append("\n");
            sb.Append("  BattleBoostIpEarned: ").Append(BattleBoostIpEarned).Append("\n");
            sb.Append("  BoostIpEarned: ").Append(BoostIpEarned).Append("\n");
            sb.Append("  BoostXpEarned: ").Append(BoostXpEarned).Append("\n");
            sb.Append("  CausedEarlySurrender: ").Append(CausedEarlySurrender).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  CoOpVsAiMinutesLeftToday: ").Append(CoOpVsAiMinutesLeftToday).Append("\n");
            sb.Append("  CoOpVsAiMsecsUntilReset: ").Append(CoOpVsAiMsecsUntilReset).Append("\n");
            sb.Append("  CompletionBonusPoints: ").Append(CompletionBonusPoints).Append("\n");
            sb.Append("  CustomMinutesLeftToday: ").Append(CustomMinutesLeftToday).Append("\n");
            sb.Append("  CustomMsecsUntilReset: ").Append(CustomMsecsUntilReset).Append("\n");
            sb.Append("  Difficulty: ").Append(Difficulty).Append("\n");
            sb.Append("  EarlySurrenderAccomplice: ").Append(EarlySurrenderAccomplice).Append("\n");
            sb.Append("  Elo: ").Append(Elo).Append("\n");
            sb.Append("  EloChange: ").Append(EloChange).Append("\n");
            sb.Append("  ExperienceEarned: ").Append(ExperienceEarned).Append("\n");
            sb.Append("  ExperienceTotal: ").Append(ExperienceTotal).Append("\n");
            sb.Append("  FirstWinBonus: ").Append(FirstWinBonus).Append("\n");
            sb.Append("  GameEndedInEarlySurrender: ").Append(GameEndedInEarlySurrender).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GameLength: ").Append(GameLength).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  ImbalancedTeamsNoPoints: ").Append(ImbalancedTeamsNoPoints).Append("\n");
            sb.Append("  Invalid: ").Append(Invalid).Append("\n");
            sb.Append("  IpEarned: ").Append(IpEarned).Append("\n");
            sb.Append("  IpTotal: ").Append(IpTotal).Append("\n");
            sb.Append("  IsAramGame: ").Append(IsAramGame).Append("\n");
            sb.Append("  LeveledUp: ").Append(LeveledUp).Append("\n");
            sb.Append("  LoyaltyBoostIpEarned: ").Append(LoyaltyBoostIpEarned).Append("\n");
            sb.Append("  LoyaltyBoostXpEarned: ").Append(LoyaltyBoostXpEarned).Append("\n");
            sb.Append("  MyTeamStatus: ").Append(MyTeamStatus).Append("\n");
            sb.Append("  NewSpells: ").Append(NewSpells).Append("\n");
            sb.Append("  OdinBonusIp: ").Append(OdinBonusIp).Append("\n");
            sb.Append("  PartyRewardsBonusIpEarned: ").Append(PartyRewardsBonusIpEarned).Append("\n");
            sb.Append("  PointsPenalties: ").Append(PointsPenalties).Append("\n");
            sb.Append("  PreviousLevel: ").Append(PreviousLevel).Append("\n");
            sb.Append("  PreviousXpTotal: ").Append(PreviousXpTotal).Append("\n");
            sb.Append("  QueueBonusEarned: ").Append(QueueBonusEarned).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Ranked: ").Append(Ranked).Append("\n");
            sb.Append("  ReportGameId: ").Append(ReportGameId).Append("\n");
            sb.Append("  RerollData: ").Append(RerollData).Append("\n");
            sb.Append("  RoomName: ").Append(RoomName).Append("\n");
            sb.Append("  RoomPassword: ").Append(RoomPassword).Append("\n");
            sb.Append("  RpEarned: ").Append(RpEarned).Append("\n");
            sb.Append("  SendStatsToTournamentProvider: ").Append(SendStatsToTournamentProvider).Append("\n");
            sb.Append("  SkinId: ").Append(SkinId).Append("\n");
            sb.Append("  SkinIndex: ").Append(SkinIndex).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  TalentPointsGained: ").Append(TalentPointsGained).Append("\n");
            sb.Append("  TeamEarlySurrendered: ").Append(TeamEarlySurrendered).Append("\n");
            sb.Append("  Teams: ").Append(Teams).Append("\n");
            sb.Append("  TimeUntilNextFirstWinBonus: ").Append(TimeUntilNextFirstWinBonus).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}