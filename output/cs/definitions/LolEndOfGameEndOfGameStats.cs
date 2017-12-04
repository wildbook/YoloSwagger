using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolEndOfGameEndOfGameStats {
    [DataMember(Name = "battleBoostIpEarned")]
    int BattleBoostIpEarned {get; set;}

    [DataMember(Name = "queueType")]
    string QueueType {get; set;}

    [DataMember(Name = "skinId")]
    int SkinId {get; set;}

    [DataMember(Name = "customMsecsUntilReset")]
    int CustomMsecsUntilReset {get; set;}

    [DataMember(Name = "gameMode")]
    string GameMode {get; set;}

    [DataMember(Name = "skinIndex")]
    int SkinIndex {get; set;}

    [DataMember(Name = "leveledUp")]
    bool LeveledUp {get; set;}

    [DataMember(Name = "previousXpTotal")]
    ulong PreviousXpTotal {get; set;}

    [DataMember(Name = "loyaltyBoostXpEarned")]
    int LoyaltyBoostXpEarned {get; set;}

    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "ipEarned")]
    int IpEarned {get; set;}

    [DataMember(Name = "gameLength")]
    int GameLength {get; set;}

    [DataMember(Name = "teamBoost")]
    LolEndOfGameEndOfGameTeamBoost TeamBoost {get; set;}

    [DataMember(Name = "roomPassword")]
    string RoomPassword {get; set;}

    [DataMember(Name = "completionBonusPoints")]
    int CompletionBonusPoints {get; set;}

    [DataMember(Name = "reportGameId")]
    ulong ReportGameId {get; set;}

    [DataMember(Name = "accountId")]
    ulong AccountId {get; set;}

    [DataMember(Name = "earlySurrenderAccomplice")]
    bool EarlySurrenderAccomplice {get; set;}

    [DataMember(Name = "pointsPenalties")]
    dynamic PointsPenalties {get; set;}

    [DataMember(Name = "championId")]
    int ChampionId {get; set;}

    [DataMember(Name = "elo")]
    int Elo {get; set;}

    [DataMember(Name = "rpEarned")]
    int RpEarned {get; set;}

    [DataMember(Name = "basePoints")]
    int BasePoints {get; set;}

    [DataMember(Name = "causedEarlySurrender")]
    bool CausedEarlySurrender {get; set;}

    [DataMember(Name = "coOpVsAiMsecsUntilReset")]
    int CoOpVsAiMsecsUntilReset {get; set;}

    [DataMember(Name = "invalid")]
    bool Invalid {get; set;}

    [DataMember(Name = "sendStatsToTournamentProvider")]
    bool SendStatsToTournamentProvider {get; set;}

    [DataMember(Name = "boostIpEarned")]
    int BoostIpEarned {get; set;}

    [DataMember(Name = "nextLevelXp")]
    ulong NextLevelXp {get; set;}

    [DataMember(Name = "queueBonusEarned")]
    int QueueBonusEarned {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "imbalancedTeamsNoPoints")]
    bool ImbalancedTeamsNoPoints {get; set;}

    [DataMember(Name = "teamEarlySurrendered")]
    bool TeamEarlySurrendered {get; set;}

    [DataMember(Name = "currentLevel")]
    ulong CurrentLevel {get; set;}

    [DataMember(Name = "summonerName")]
    string SummonerName {get; set;}

    [DataMember(Name = "missionsXpEarned")]
    int MissionsXpEarned {get; set;}

    [DataMember(Name = "userId")]
    ulong UserId {get; set;}

    [DataMember(Name = "coOpVsAiMinutesLeftToday")]
    int CoOpVsAiMinutesLeftToday {get; set;}

    [DataMember(Name = "ipTotal")]
    int IpTotal {get; set;}

    [DataMember(Name = "difficulty")]
    string Difficulty {get; set;}

    [DataMember(Name = "ranked")]
    bool Ranked {get; set;}

    [DataMember(Name = "loyaltyBoostIpEarned")]
    int LoyaltyBoostIpEarned {get; set;}

    [DataMember(Name = "timeUntilNextFirstWinBonus")]
    int TimeUntilNextFirstWinBonus {get; set;}

    [DataMember(Name = "eloChange")]
    int EloChange {get; set;}

    [DataMember(Name = "experienceTotal")]
    int ExperienceTotal {get; set;}

    [DataMember(Name = "previousLevel")]
    ulong PreviousLevel {get; set;}

    [DataMember(Name = "odinBonusIp")]
    int OdinBonusIp {get; set;}

    [DataMember(Name = "rerollData")]
    LolEndOfGameEndOfGamePoints RerollData {get; set;}

    [DataMember(Name = "firstWinBonus")]
    int FirstWinBonus {get; set;}

    [DataMember(Name = "gameEndedInEarlySurrender")]
    bool GameEndedInEarlySurrender {get; set;}

    [DataMember(Name = "gameType")]
    string GameType {get; set;}

    [DataMember(Name = "teams")]
    LolEndOfGameEndOfGameTeam[] Teams {get; set;}

    [DataMember(Name = "roomName")]
    string RoomName {get; set;}

    [DataMember(Name = "customMinutesLeftToday")]
    int CustomMinutesLeftToday {get; set;}

    [DataMember(Name = "newSpells")]
    int[] NewSpells {get; set;}

    [DataMember(Name = "myTeamStatus")]
    string MyTeamStatus {get; set;}

    [DataMember(Name = "experienceEarned")]
    int ExperienceEarned {get; set;}

    [DataMember(Name = "gameMutators")]
    string[] GameMutators {get; set;}

    [DataMember(Name = "boostXpEarned")]
    int BoostXpEarned {get; set;}

    [DataMember(Name = "talentPointsGained")]
    int TalentPointsGained {get; set;}

    [DataMember(Name = "globalBoostXpEarned")]
    int GlobalBoostXpEarned {get; set;}

    [DataMember(Name = "partyRewardsBonusIpEarned")]
    int PartyRewardsBonusIpEarned {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolEndOfGameEndOfGameStats {\n");
      sb.Append("  BattleBoostIpEarned: ").Append(BattleBoostIpEarned).Append("\n");
      sb.Append("  QueueType: ").Append(QueueType).Append("\n");
      sb.Append("  SkinId: ").Append(SkinId).Append("\n");
      sb.Append("  CustomMsecsUntilReset: ").Append(CustomMsecsUntilReset).Append("\n");
      sb.Append("  GameMode: ").Append(GameMode).Append("\n");
      sb.Append("  SkinIndex: ").Append(SkinIndex).Append("\n");
      sb.Append("  LeveledUp: ").Append(LeveledUp).Append("\n");
      sb.Append("  PreviousXpTotal: ").Append(PreviousXpTotal).Append("\n");
      sb.Append("  LoyaltyBoostXpEarned: ").Append(LoyaltyBoostXpEarned).Append("\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  IpEarned: ").Append(IpEarned).Append("\n");
      sb.Append("  GameLength: ").Append(GameLength).Append("\n");
      sb.Append("  TeamBoost: ").Append(TeamBoost).Append("\n");
      sb.Append("  RoomPassword: ").Append(RoomPassword).Append("\n");
      sb.Append("  CompletionBonusPoints: ").Append(CompletionBonusPoints).Append("\n");
      sb.Append("  ReportGameId: ").Append(ReportGameId).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("  EarlySurrenderAccomplice: ").Append(EarlySurrenderAccomplice).Append("\n");
      sb.Append("  PointsPenalties: ").Append(PointsPenalties).Append("\n");
      sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
      sb.Append("  Elo: ").Append(Elo).Append("\n");
      sb.Append("  RpEarned: ").Append(RpEarned).Append("\n");
      sb.Append("  BasePoints: ").Append(BasePoints).Append("\n");
      sb.Append("  CausedEarlySurrender: ").Append(CausedEarlySurrender).Append("\n");
      sb.Append("  CoOpVsAiMsecsUntilReset: ").Append(CoOpVsAiMsecsUntilReset).Append("\n");
      sb.Append("  Invalid: ").Append(Invalid).Append("\n");
      sb.Append("  SendStatsToTournamentProvider: ").Append(SendStatsToTournamentProvider).Append("\n");
      sb.Append("  BoostIpEarned: ").Append(BoostIpEarned).Append("\n");
      sb.Append("  NextLevelXp: ").Append(NextLevelXp).Append("\n");
      sb.Append("  QueueBonusEarned: ").Append(QueueBonusEarned).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  ImbalancedTeamsNoPoints: ").Append(ImbalancedTeamsNoPoints).Append("\n");
      sb.Append("  TeamEarlySurrendered: ").Append(TeamEarlySurrendered).Append("\n");
      sb.Append("  CurrentLevel: ").Append(CurrentLevel).Append("\n");
      sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
      sb.Append("  MissionsXpEarned: ").Append(MissionsXpEarned).Append("\n");
      sb.Append("  UserId: ").Append(UserId).Append("\n");
      sb.Append("  CoOpVsAiMinutesLeftToday: ").Append(CoOpVsAiMinutesLeftToday).Append("\n");
      sb.Append("  IpTotal: ").Append(IpTotal).Append("\n");
      sb.Append("  Difficulty: ").Append(Difficulty).Append("\n");
      sb.Append("  Ranked: ").Append(Ranked).Append("\n");
      sb.Append("  LoyaltyBoostIpEarned: ").Append(LoyaltyBoostIpEarned).Append("\n");
      sb.Append("  TimeUntilNextFirstWinBonus: ").Append(TimeUntilNextFirstWinBonus).Append("\n");
      sb.Append("  EloChange: ").Append(EloChange).Append("\n");
      sb.Append("  ExperienceTotal: ").Append(ExperienceTotal).Append("\n");
      sb.Append("  PreviousLevel: ").Append(PreviousLevel).Append("\n");
      sb.Append("  OdinBonusIp: ").Append(OdinBonusIp).Append("\n");
      sb.Append("  RerollData: ").Append(RerollData).Append("\n");
      sb.Append("  FirstWinBonus: ").Append(FirstWinBonus).Append("\n");
      sb.Append("  GameEndedInEarlySurrender: ").Append(GameEndedInEarlySurrender).Append("\n");
      sb.Append("  GameType: ").Append(GameType).Append("\n");
      sb.Append("  Teams: ").Append(Teams).Append("\n");
      sb.Append("  RoomName: ").Append(RoomName).Append("\n");
      sb.Append("  CustomMinutesLeftToday: ").Append(CustomMinutesLeftToday).Append("\n");
      sb.Append("  NewSpells: ").Append(NewSpells).Append("\n");
      sb.Append("  MyTeamStatus: ").Append(MyTeamStatus).Append("\n");
      sb.Append("  ExperienceEarned: ").Append(ExperienceEarned).Append("\n");
      sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
      sb.Append("  BoostXpEarned: ").Append(BoostXpEarned).Append("\n");
      sb.Append("  TalentPointsGained: ").Append(TalentPointsGained).Append("\n");
      sb.Append("  GlobalBoostXpEarned: ").Append(GlobalBoostXpEarned).Append("\n");
      sb.Append("  PartyRewardsBonusIpEarned: ").Append(PartyRewardsBonusIpEarned).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}