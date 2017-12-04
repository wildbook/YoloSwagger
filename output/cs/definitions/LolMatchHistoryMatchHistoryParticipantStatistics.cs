using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantStatistics {
    [DataMember(Name = "item1")]
    ushort Item1 {get; set;}

    [DataMember(Name = "visionScore")]
    long VisionScore {get; set;}

    [DataMember(Name = "magicDamageDealtToChampions")]
    long MagicDamageDealtToChampions {get; set;}

    [DataMember(Name = "damageDealtToObjectives")]
    long DamageDealtToObjectives {get; set;}

    [DataMember(Name = "totalTimeCrowdControlDealt")]
    long TotalTimeCrowdControlDealt {get; set;}

    [DataMember(Name = "longestTimeSpentLiving")]
    long LongestTimeSpentLiving {get; set;}

    [DataMember(Name = "totalPlayerScore")]
    long TotalPlayerScore {get; set;}

    [DataMember(Name = "earlySurrenderAccomplice")]
    bool EarlySurrenderAccomplice {get; set;}

    [DataMember(Name = "perk1Var1")]
    long Perk1Var1 {get; set;}

    [DataMember(Name = "perk1Var3")]
    long Perk1Var3 {get; set;}

    [DataMember(Name = "perk1Var2")]
    long Perk1Var2 {get; set;}

    [DataMember(Name = "tripleKills")]
    long TripleKills {get; set;}

    [DataMember(Name = "perk5")]
    long Perk5 {get; set;}

    [DataMember(Name = "perk4")]
    long Perk4 {get; set;}

    [DataMember(Name = "playerScore9")]
    long PlayerScore9 {get; set;}

    [DataMember(Name = "playerScore8")]
    long PlayerScore8 {get; set;}

    [DataMember(Name = "kills")]
    long Kills {get; set;}

    [DataMember(Name = "playerScore1")]
    long PlayerScore1 {get; set;}

    [DataMember(Name = "playerScore0")]
    long PlayerScore0 {get; set;}

    [DataMember(Name = "playerScore3")]
    long PlayerScore3 {get; set;}

    [DataMember(Name = "playerScore2")]
    long PlayerScore2 {get; set;}

    [DataMember(Name = "playerScore5")]
    long PlayerScore5 {get; set;}

    [DataMember(Name = "playerScore4")]
    long PlayerScore4 {get; set;}

    [DataMember(Name = "playerScore7")]
    long PlayerScore7 {get; set;}

    [DataMember(Name = "playerScore6")]
    long PlayerScore6 {get; set;}

    [DataMember(Name = "perk5Var1")]
    long Perk5Var1 {get; set;}

    [DataMember(Name = "perk5Var3")]
    long Perk5Var3 {get; set;}

    [DataMember(Name = "perk5Var2")]
    long Perk5Var2 {get; set;}

    [DataMember(Name = "totalScoreRank")]
    long TotalScoreRank {get; set;}

    [DataMember(Name = "neutralMinionsKilled")]
    long NeutralMinionsKilled {get; set;}

    [DataMember(Name = "damageDealtToTurrets")]
    long DamageDealtToTurrets {get; set;}

    [DataMember(Name = "physicalDamageDealtToChampions")]
    long PhysicalDamageDealtToChampions {get; set;}

    [DataMember(Name = "largestMultiKill")]
    long LargestMultiKill {get; set;}

    [DataMember(Name = "perk2Var2")]
    long Perk2Var2 {get; set;}

    [DataMember(Name = "perk2Var3")]
    long Perk2Var3 {get; set;}

    [DataMember(Name = "totalUnitsHealed")]
    long TotalUnitsHealed {get; set;}

    [DataMember(Name = "perk2Var1")]
    long Perk2Var1 {get; set;}

    [DataMember(Name = "perk4Var1")]
    long Perk4Var1 {get; set;}

    [DataMember(Name = "perk4Var2")]
    long Perk4Var2 {get; set;}

    [DataMember(Name = "perk4Var3")]
    long Perk4Var3 {get; set;}

    [DataMember(Name = "wardsKilled")]
    long WardsKilled {get; set;}

    [DataMember(Name = "largestCriticalStrike")]
    long LargestCriticalStrike {get; set;}

    [DataMember(Name = "largestKillingSpree")]
    long LargestKillingSpree {get; set;}

    [DataMember(Name = "quadraKills")]
    long QuadraKills {get; set;}

    [DataMember(Name = "magicDamageDealt")]
    long MagicDamageDealt {get; set;}

    [DataMember(Name = "neutralMinionsKilledTeamJungle")]
    long NeutralMinionsKilledTeamJungle {get; set;}

    [DataMember(Name = "item2")]
    ushort Item2 {get; set;}

    [DataMember(Name = "item3")]
    ushort Item3 {get; set;}

    [DataMember(Name = "item0")]
    ushort Item0 {get; set;}

    [DataMember(Name = "firstBloodAssist")]
    bool FirstBloodAssist {get; set;}

    [DataMember(Name = "item6")]
    ushort Item6 {get; set;}

    [DataMember(Name = "item4")]
    ushort Item4 {get; set;}

    [DataMember(Name = "item5")]
    ushort Item5 {get; set;}

    [DataMember(Name = "perk1")]
    long Perk1 {get; set;}

    [DataMember(Name = "perk0")]
    long Perk0 {get; set;}

    [DataMember(Name = "perk3")]
    long Perk3 {get; set;}

    [DataMember(Name = "perk2")]
    long Perk2 {get; set;}

    [DataMember(Name = "perk3Var3")]
    long Perk3Var3 {get; set;}

    [DataMember(Name = "perk3Var2")]
    long Perk3Var2 {get; set;}

    [DataMember(Name = "perk3Var1")]
    long Perk3Var1 {get; set;}

    [DataMember(Name = "damageSelfMitigated")]
    long DamageSelfMitigated {get; set;}

    [DataMember(Name = "teamEarlySurrendered")]
    bool TeamEarlySurrendered {get; set;}

    [DataMember(Name = "trueDamageTaken")]
    long TrueDamageTaken {get; set;}

    [DataMember(Name = "magicalDamageTaken")]
    long MagicalDamageTaken {get; set;}

    [DataMember(Name = "firstInhibitorKill")]
    bool FirstInhibitorKill {get; set;}

    [DataMember(Name = "inhibitorKills")]
    long InhibitorKills {get; set;}

    [DataMember(Name = "assists")]
    long Assists {get; set;}

    [DataMember(Name = "perkPrimaryStyle")]
    long PerkPrimaryStyle {get; set;}

    [DataMember(Name = "goldSpent")]
    long GoldSpent {get; set;}

    [DataMember(Name = "trueDamageDealt")]
    long TrueDamageDealt {get; set;}

    [DataMember(Name = "participantId")]
    ushort ParticipantId {get; set;}

    [DataMember(Name = "gameEndedInEarlySurrender")]
    bool GameEndedInEarlySurrender {get; set;}

    [DataMember(Name = "totalDamageTaken")]
    long TotalDamageTaken {get; set;}

    [DataMember(Name = "physicalDamageDealt")]
    long PhysicalDamageDealt {get; set;}

    [DataMember(Name = "sightWardsBoughtInGame")]
    long SightWardsBoughtInGame {get; set;}

    [DataMember(Name = "totalDamageDealtToChampions")]
    long TotalDamageDealtToChampions {get; set;}

    [DataMember(Name = "physicalDamageTaken")]
    long PhysicalDamageTaken {get; set;}

    [DataMember(Name = "combatPlayerScore")]
    long CombatPlayerScore {get; set;}

    [DataMember(Name = "win")]
    bool Win {get; set;}

    [DataMember(Name = "objectivePlayerScore")]
    long ObjectivePlayerScore {get; set;}

    [DataMember(Name = "totalDamageDealt")]
    long TotalDamageDealt {get; set;}

    [DataMember(Name = "neutralMinionsKilledEnemyJungle")]
    long NeutralMinionsKilledEnemyJungle {get; set;}

    [DataMember(Name = "causedEarlySurrender")]
    bool CausedEarlySurrender {get; set;}

    [DataMember(Name = "deaths")]
    long Deaths {get; set;}

    [DataMember(Name = "wardsPlaced")]
    long WardsPlaced {get; set;}

    [DataMember(Name = "perkSubStyle")]
    long PerkSubStyle {get; set;}

    [DataMember(Name = "turretKills")]
    long TurretKills {get; set;}

    [DataMember(Name = "firstBloodKill")]
    bool FirstBloodKill {get; set;}

    [DataMember(Name = "trueDamageDealtToChampions")]
    long TrueDamageDealtToChampions {get; set;}

    [DataMember(Name = "goldEarned")]
    long GoldEarned {get; set;}

    [DataMember(Name = "killingSprees")]
    long KillingSprees {get; set;}

    [DataMember(Name = "gameEndedInSurrender")]
    bool GameEndedInSurrender {get; set;}

    [DataMember(Name = "firstTowerAssist")]
    bool FirstTowerAssist {get; set;}

    [DataMember(Name = "firstTowerKill")]
    bool FirstTowerKill {get; set;}

    [DataMember(Name = "champLevel")]
    long ChampLevel {get; set;}

    [DataMember(Name = "unrealKills")]
    long UnrealKills {get; set;}

    [DataMember(Name = "doubleKills")]
    long DoubleKills {get; set;}

    [DataMember(Name = "firstInhibitorAssist")]
    bool FirstInhibitorAssist {get; set;}

    [DataMember(Name = "perk0Var1")]
    long Perk0Var1 {get; set;}

    [DataMember(Name = "perk0Var2")]
    long Perk0Var2 {get; set;}

    [DataMember(Name = "perk0Var3")]
    long Perk0Var3 {get; set;}

    [DataMember(Name = "visionWardsBoughtInGame")]
    long VisionWardsBoughtInGame {get; set;}

    [DataMember(Name = "pentaKills")]
    long PentaKills {get; set;}

    [DataMember(Name = "totalHeal")]
    long TotalHeal {get; set;}

    [DataMember(Name = "totalMinionsKilled")]
    long TotalMinionsKilled {get; set;}

    [DataMember(Name = "timeCCingOthers")]
    long TimeCCingOthers {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryParticipantStatistics {\n");
      sb.Append("  Item1: ").Append(Item1).Append("\n");
      sb.Append("  VisionScore: ").Append(VisionScore).Append("\n");
      sb.Append("  MagicDamageDealtToChampions: ").Append(MagicDamageDealtToChampions).Append("\n");
      sb.Append("  DamageDealtToObjectives: ").Append(DamageDealtToObjectives).Append("\n");
      sb.Append("  TotalTimeCrowdControlDealt: ").Append(TotalTimeCrowdControlDealt).Append("\n");
      sb.Append("  LongestTimeSpentLiving: ").Append(LongestTimeSpentLiving).Append("\n");
      sb.Append("  TotalPlayerScore: ").Append(TotalPlayerScore).Append("\n");
      sb.Append("  EarlySurrenderAccomplice: ").Append(EarlySurrenderAccomplice).Append("\n");
      sb.Append("  Perk1Var1: ").Append(Perk1Var1).Append("\n");
      sb.Append("  Perk1Var3: ").Append(Perk1Var3).Append("\n");
      sb.Append("  Perk1Var2: ").Append(Perk1Var2).Append("\n");
      sb.Append("  TripleKills: ").Append(TripleKills).Append("\n");
      sb.Append("  Perk5: ").Append(Perk5).Append("\n");
      sb.Append("  Perk4: ").Append(Perk4).Append("\n");
      sb.Append("  PlayerScore9: ").Append(PlayerScore9).Append("\n");
      sb.Append("  PlayerScore8: ").Append(PlayerScore8).Append("\n");
      sb.Append("  Kills: ").Append(Kills).Append("\n");
      sb.Append("  PlayerScore1: ").Append(PlayerScore1).Append("\n");
      sb.Append("  PlayerScore0: ").Append(PlayerScore0).Append("\n");
      sb.Append("  PlayerScore3: ").Append(PlayerScore3).Append("\n");
      sb.Append("  PlayerScore2: ").Append(PlayerScore2).Append("\n");
      sb.Append("  PlayerScore5: ").Append(PlayerScore5).Append("\n");
      sb.Append("  PlayerScore4: ").Append(PlayerScore4).Append("\n");
      sb.Append("  PlayerScore7: ").Append(PlayerScore7).Append("\n");
      sb.Append("  PlayerScore6: ").Append(PlayerScore6).Append("\n");
      sb.Append("  Perk5Var1: ").Append(Perk5Var1).Append("\n");
      sb.Append("  Perk5Var3: ").Append(Perk5Var3).Append("\n");
      sb.Append("  Perk5Var2: ").Append(Perk5Var2).Append("\n");
      sb.Append("  TotalScoreRank: ").Append(TotalScoreRank).Append("\n");
      sb.Append("  NeutralMinionsKilled: ").Append(NeutralMinionsKilled).Append("\n");
      sb.Append("  DamageDealtToTurrets: ").Append(DamageDealtToTurrets).Append("\n");
      sb.Append("  PhysicalDamageDealtToChampions: ").Append(PhysicalDamageDealtToChampions).Append("\n");
      sb.Append("  LargestMultiKill: ").Append(LargestMultiKill).Append("\n");
      sb.Append("  Perk2Var2: ").Append(Perk2Var2).Append("\n");
      sb.Append("  Perk2Var3: ").Append(Perk2Var3).Append("\n");
      sb.Append("  TotalUnitsHealed: ").Append(TotalUnitsHealed).Append("\n");
      sb.Append("  Perk2Var1: ").Append(Perk2Var1).Append("\n");
      sb.Append("  Perk4Var1: ").Append(Perk4Var1).Append("\n");
      sb.Append("  Perk4Var2: ").Append(Perk4Var2).Append("\n");
      sb.Append("  Perk4Var3: ").Append(Perk4Var3).Append("\n");
      sb.Append("  WardsKilled: ").Append(WardsKilled).Append("\n");
      sb.Append("  LargestCriticalStrike: ").Append(LargestCriticalStrike).Append("\n");
      sb.Append("  LargestKillingSpree: ").Append(LargestKillingSpree).Append("\n");
      sb.Append("  QuadraKills: ").Append(QuadraKills).Append("\n");
      sb.Append("  MagicDamageDealt: ").Append(MagicDamageDealt).Append("\n");
      sb.Append("  NeutralMinionsKilledTeamJungle: ").Append(NeutralMinionsKilledTeamJungle).Append("\n");
      sb.Append("  Item2: ").Append(Item2).Append("\n");
      sb.Append("  Item3: ").Append(Item3).Append("\n");
      sb.Append("  Item0: ").Append(Item0).Append("\n");
      sb.Append("  FirstBloodAssist: ").Append(FirstBloodAssist).Append("\n");
      sb.Append("  Item6: ").Append(Item6).Append("\n");
      sb.Append("  Item4: ").Append(Item4).Append("\n");
      sb.Append("  Item5: ").Append(Item5).Append("\n");
      sb.Append("  Perk1: ").Append(Perk1).Append("\n");
      sb.Append("  Perk0: ").Append(Perk0).Append("\n");
      sb.Append("  Perk3: ").Append(Perk3).Append("\n");
      sb.Append("  Perk2: ").Append(Perk2).Append("\n");
      sb.Append("  Perk3Var3: ").Append(Perk3Var3).Append("\n");
      sb.Append("  Perk3Var2: ").Append(Perk3Var2).Append("\n");
      sb.Append("  Perk3Var1: ").Append(Perk3Var1).Append("\n");
      sb.Append("  DamageSelfMitigated: ").Append(DamageSelfMitigated).Append("\n");
      sb.Append("  TeamEarlySurrendered: ").Append(TeamEarlySurrendered).Append("\n");
      sb.Append("  TrueDamageTaken: ").Append(TrueDamageTaken).Append("\n");
      sb.Append("  MagicalDamageTaken: ").Append(MagicalDamageTaken).Append("\n");
      sb.Append("  FirstInhibitorKill: ").Append(FirstInhibitorKill).Append("\n");
      sb.Append("  InhibitorKills: ").Append(InhibitorKills).Append("\n");
      sb.Append("  Assists: ").Append(Assists).Append("\n");
      sb.Append("  PerkPrimaryStyle: ").Append(PerkPrimaryStyle).Append("\n");
      sb.Append("  GoldSpent: ").Append(GoldSpent).Append("\n");
      sb.Append("  TrueDamageDealt: ").Append(TrueDamageDealt).Append("\n");
      sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
      sb.Append("  GameEndedInEarlySurrender: ").Append(GameEndedInEarlySurrender).Append("\n");
      sb.Append("  TotalDamageTaken: ").Append(TotalDamageTaken).Append("\n");
      sb.Append("  PhysicalDamageDealt: ").Append(PhysicalDamageDealt).Append("\n");
      sb.Append("  SightWardsBoughtInGame: ").Append(SightWardsBoughtInGame).Append("\n");
      sb.Append("  TotalDamageDealtToChampions: ").Append(TotalDamageDealtToChampions).Append("\n");
      sb.Append("  PhysicalDamageTaken: ").Append(PhysicalDamageTaken).Append("\n");
      sb.Append("  CombatPlayerScore: ").Append(CombatPlayerScore).Append("\n");
      sb.Append("  Win: ").Append(Win).Append("\n");
      sb.Append("  ObjectivePlayerScore: ").Append(ObjectivePlayerScore).Append("\n");
      sb.Append("  TotalDamageDealt: ").Append(TotalDamageDealt).Append("\n");
      sb.Append("  NeutralMinionsKilledEnemyJungle: ").Append(NeutralMinionsKilledEnemyJungle).Append("\n");
      sb.Append("  CausedEarlySurrender: ").Append(CausedEarlySurrender).Append("\n");
      sb.Append("  Deaths: ").Append(Deaths).Append("\n");
      sb.Append("  WardsPlaced: ").Append(WardsPlaced).Append("\n");
      sb.Append("  PerkSubStyle: ").Append(PerkSubStyle).Append("\n");
      sb.Append("  TurretKills: ").Append(TurretKills).Append("\n");
      sb.Append("  FirstBloodKill: ").Append(FirstBloodKill).Append("\n");
      sb.Append("  TrueDamageDealtToChampions: ").Append(TrueDamageDealtToChampions).Append("\n");
      sb.Append("  GoldEarned: ").Append(GoldEarned).Append("\n");
      sb.Append("  KillingSprees: ").Append(KillingSprees).Append("\n");
      sb.Append("  GameEndedInSurrender: ").Append(GameEndedInSurrender).Append("\n");
      sb.Append("  FirstTowerAssist: ").Append(FirstTowerAssist).Append("\n");
      sb.Append("  FirstTowerKill: ").Append(FirstTowerKill).Append("\n");
      sb.Append("  ChampLevel: ").Append(ChampLevel).Append("\n");
      sb.Append("  UnrealKills: ").Append(UnrealKills).Append("\n");
      sb.Append("  DoubleKills: ").Append(DoubleKills).Append("\n");
      sb.Append("  FirstInhibitorAssist: ").Append(FirstInhibitorAssist).Append("\n");
      sb.Append("  Perk0Var1: ").Append(Perk0Var1).Append("\n");
      sb.Append("  Perk0Var2: ").Append(Perk0Var2).Append("\n");
      sb.Append("  Perk0Var3: ").Append(Perk0Var3).Append("\n");
      sb.Append("  VisionWardsBoughtInGame: ").Append(VisionWardsBoughtInGame).Append("\n");
      sb.Append("  PentaKills: ").Append(PentaKills).Append("\n");
      sb.Append("  TotalHeal: ").Append(TotalHeal).Append("\n");
      sb.Append("  TotalMinionsKilled: ").Append(TotalMinionsKilled).Append("\n");
      sb.Append("  TimeCCingOthers: ").Append(TimeCCingOthers).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}