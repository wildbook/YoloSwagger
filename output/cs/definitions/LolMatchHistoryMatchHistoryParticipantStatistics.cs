using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryParticipantStatistics
    {
        [DataMember(Name = "assists")]
        public long Assists { get; set; }

        [DataMember(Name = "causedEarlySurrender")]
        public bool CausedEarlySurrender { get; set; }

        [DataMember(Name = "champLevel")]
        public long ChampLevel { get; set; }

        [DataMember(Name = "combatPlayerScore")]
        public long CombatPlayerScore { get; set; }

        [DataMember(Name = "damageDealtToObjectives")]
        public long DamageDealtToObjectives { get; set; }

        [DataMember(Name = "damageDealtToTurrets")]
        public long DamageDealtToTurrets { get; set; }

        [DataMember(Name = "damageSelfMitigated")]
        public long DamageSelfMitigated { get; set; }

        [DataMember(Name = "deaths")]
        public long Deaths { get; set; }

        [DataMember(Name = "doubleKills")]
        public long DoubleKills { get; set; }

        [DataMember(Name = "earlySurrenderAccomplice")]
        public bool EarlySurrenderAccomplice { get; set; }

        [DataMember(Name = "firstBloodAssist")]
        public bool FirstBloodAssist { get; set; }

        [DataMember(Name = "firstBloodKill")]
        public bool FirstBloodKill { get; set; }

        [DataMember(Name = "firstInhibitorAssist")]
        public bool FirstInhibitorAssist { get; set; }

        [DataMember(Name = "firstInhibitorKill")]
        public bool FirstInhibitorKill { get; set; }

        [DataMember(Name = "firstTowerAssist")]
        public bool FirstTowerAssist { get; set; }

        [DataMember(Name = "firstTowerKill")]
        public bool FirstTowerKill { get; set; }

        [DataMember(Name = "gameEndedInEarlySurrender")]
        public bool GameEndedInEarlySurrender { get; set; }

        [DataMember(Name = "gameEndedInSurrender")]
        public bool GameEndedInSurrender { get; set; }

        [DataMember(Name = "goldEarned")]
        public long GoldEarned { get; set; }

        [DataMember(Name = "goldSpent")]
        public long GoldSpent { get; set; }

        [DataMember(Name = "inhibitorKills")]
        public long InhibitorKills { get; set; }

        [DataMember(Name = "item0")]
        public ushort Item0 { get; set; }

        [DataMember(Name = "item1")]
        public ushort Item1 { get; set; }

        [DataMember(Name = "item2")]
        public ushort Item2 { get; set; }

        [DataMember(Name = "item3")]
        public ushort Item3 { get; set; }

        [DataMember(Name = "item4")]
        public ushort Item4 { get; set; }

        [DataMember(Name = "item5")]
        public ushort Item5 { get; set; }

        [DataMember(Name = "item6")]
        public ushort Item6 { get; set; }

        [DataMember(Name = "killingSprees")]
        public long KillingSprees { get; set; }

        [DataMember(Name = "kills")]
        public long Kills { get; set; }

        [DataMember(Name = "largestCriticalStrike")]
        public long LargestCriticalStrike { get; set; }

        [DataMember(Name = "largestKillingSpree")]
        public long LargestKillingSpree { get; set; }

        [DataMember(Name = "largestMultiKill")]
        public long LargestMultiKill { get; set; }

        [DataMember(Name = "longestTimeSpentLiving")]
        public long LongestTimeSpentLiving { get; set; }

        [DataMember(Name = "magicDamageDealt")]
        public long MagicDamageDealt { get; set; }

        [DataMember(Name = "magicDamageDealtToChampions")]
        public long MagicDamageDealtToChampions { get; set; }

        [DataMember(Name = "magicalDamageTaken")]
        public long MagicalDamageTaken { get; set; }

        [DataMember(Name = "neutralMinionsKilled")]
        public long NeutralMinionsKilled { get; set; }

        [DataMember(Name = "neutralMinionsKilledEnemyJungle")]
        public long NeutralMinionsKilledEnemyJungle { get; set; }

        [DataMember(Name = "neutralMinionsKilledTeamJungle")]
        public long NeutralMinionsKilledTeamJungle { get; set; }

        [DataMember(Name = "objectivePlayerScore")]
        public long ObjectivePlayerScore { get; set; }

        [DataMember(Name = "participantId")]
        public ushort ParticipantId { get; set; }

        [DataMember(Name = "pentaKills")]
        public long PentaKills { get; set; }

        [DataMember(Name = "perk0")]
        public long Perk0 { get; set; }

        [DataMember(Name = "perk0Var1")]
        public long Perk0Var1 { get; set; }

        [DataMember(Name = "perk0Var2")]
        public long Perk0Var2 { get; set; }

        [DataMember(Name = "perk0Var3")]
        public long Perk0Var3 { get; set; }

        [DataMember(Name = "perk1")]
        public long Perk1 { get; set; }

        [DataMember(Name = "perk1Var1")]
        public long Perk1Var1 { get; set; }

        [DataMember(Name = "perk1Var2")]
        public long Perk1Var2 { get; set; }

        [DataMember(Name = "perk1Var3")]
        public long Perk1Var3 { get; set; }

        [DataMember(Name = "perk2")]
        public long Perk2 { get; set; }

        [DataMember(Name = "perk2Var1")]
        public long Perk2Var1 { get; set; }

        [DataMember(Name = "perk2Var2")]
        public long Perk2Var2 { get; set; }

        [DataMember(Name = "perk2Var3")]
        public long Perk2Var3 { get; set; }

        [DataMember(Name = "perk3")]
        public long Perk3 { get; set; }

        [DataMember(Name = "perk3Var1")]
        public long Perk3Var1 { get; set; }

        [DataMember(Name = "perk3Var2")]
        public long Perk3Var2 { get; set; }

        [DataMember(Name = "perk3Var3")]
        public long Perk3Var3 { get; set; }

        [DataMember(Name = "perk4")]
        public long Perk4 { get; set; }

        [DataMember(Name = "perk4Var1")]
        public long Perk4Var1 { get; set; }

        [DataMember(Name = "perk4Var2")]
        public long Perk4Var2 { get; set; }

        [DataMember(Name = "perk4Var3")]
        public long Perk4Var3 { get; set; }

        [DataMember(Name = "perk5")]
        public long Perk5 { get; set; }

        [DataMember(Name = "perk5Var1")]
        public long Perk5Var1 { get; set; }

        [DataMember(Name = "perk5Var2")]
        public long Perk5Var2 { get; set; }

        [DataMember(Name = "perk5Var3")]
        public long Perk5Var3 { get; set; }

        [DataMember(Name = "perkPrimaryStyle")]
        public long PerkPrimaryStyle { get; set; }

        [DataMember(Name = "perkSubStyle")]
        public long PerkSubStyle { get; set; }

        [DataMember(Name = "physicalDamageDealt")]
        public long PhysicalDamageDealt { get; set; }

        [DataMember(Name = "physicalDamageDealtToChampions")]
        public long PhysicalDamageDealtToChampions { get; set; }

        [DataMember(Name = "physicalDamageTaken")]
        public long PhysicalDamageTaken { get; set; }

        [DataMember(Name = "playerScore0")]
        public long PlayerScore0 { get; set; }

        [DataMember(Name = "playerScore1")]
        public long PlayerScore1 { get; set; }

        [DataMember(Name = "playerScore2")]
        public long PlayerScore2 { get; set; }

        [DataMember(Name = "playerScore3")]
        public long PlayerScore3 { get; set; }

        [DataMember(Name = "playerScore4")]
        public long PlayerScore4 { get; set; }

        [DataMember(Name = "playerScore5")]
        public long PlayerScore5 { get; set; }

        [DataMember(Name = "playerScore6")]
        public long PlayerScore6 { get; set; }

        [DataMember(Name = "playerScore7")]
        public long PlayerScore7 { get; set; }

        [DataMember(Name = "playerScore8")]
        public long PlayerScore8 { get; set; }

        [DataMember(Name = "playerScore9")]
        public long PlayerScore9 { get; set; }

        [DataMember(Name = "quadraKills")]
        public long QuadraKills { get; set; }

        [DataMember(Name = "sightWardsBoughtInGame")]
        public long SightWardsBoughtInGame { get; set; }

        [DataMember(Name = "teamEarlySurrendered")]
        public bool TeamEarlySurrendered { get; set; }

        [DataMember(Name = "timeCCingOthers")]
        public long TimeCCingOthers { get; set; }

        [DataMember(Name = "totalDamageDealt")]
        public long TotalDamageDealt { get; set; }

        [DataMember(Name = "totalDamageDealtToChampions")]
        public long TotalDamageDealtToChampions { get; set; }

        [DataMember(Name = "totalDamageTaken")]
        public long TotalDamageTaken { get; set; }

        [DataMember(Name = "totalHeal")]
        public long TotalHeal { get; set; }

        [DataMember(Name = "totalMinionsKilled")]
        public long TotalMinionsKilled { get; set; }

        [DataMember(Name = "totalPlayerScore")]
        public long TotalPlayerScore { get; set; }

        [DataMember(Name = "totalScoreRank")]
        public long TotalScoreRank { get; set; }

        [DataMember(Name = "totalTimeCrowdControlDealt")]
        public long TotalTimeCrowdControlDealt { get; set; }

        [DataMember(Name = "totalUnitsHealed")]
        public long TotalUnitsHealed { get; set; }

        [DataMember(Name = "tripleKills")]
        public long TripleKills { get; set; }

        [DataMember(Name = "trueDamageDealt")]
        public long TrueDamageDealt { get; set; }

        [DataMember(Name = "trueDamageDealtToChampions")]
        public long TrueDamageDealtToChampions { get; set; }

        [DataMember(Name = "trueDamageTaken")]
        public long TrueDamageTaken { get; set; }

        [DataMember(Name = "turretKills")]
        public long TurretKills { get; set; }

        [DataMember(Name = "unrealKills")]
        public long UnrealKills { get; set; }

        [DataMember(Name = "visionScore")]
        public long VisionScore { get; set; }

        [DataMember(Name = "visionWardsBoughtInGame")]
        public long VisionWardsBoughtInGame { get; set; }

        [DataMember(Name = "wardsKilled")]
        public long WardsKilled { get; set; }

        [DataMember(Name = "wardsPlaced")]
        public long WardsPlaced { get; set; }

        [DataMember(Name = "win")]
        public bool Win { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryParticipantStatistics {\n");
            sb.Append("  Assists: ").Append(Assists).Append("\n");
            sb.Append("  CausedEarlySurrender: ").Append(CausedEarlySurrender).Append("\n");
            sb.Append("  ChampLevel: ").Append(ChampLevel).Append("\n");
            sb.Append("  CombatPlayerScore: ").Append(CombatPlayerScore).Append("\n");
            sb.Append("  DamageDealtToObjectives: ").Append(DamageDealtToObjectives).Append("\n");
            sb.Append("  DamageDealtToTurrets: ").Append(DamageDealtToTurrets).Append("\n");
            sb.Append("  DamageSelfMitigated: ").Append(DamageSelfMitigated).Append("\n");
            sb.Append("  Deaths: ").Append(Deaths).Append("\n");
            sb.Append("  DoubleKills: ").Append(DoubleKills).Append("\n");
            sb.Append("  EarlySurrenderAccomplice: ").Append(EarlySurrenderAccomplice).Append("\n");
            sb.Append("  FirstBloodAssist: ").Append(FirstBloodAssist).Append("\n");
            sb.Append("  FirstBloodKill: ").Append(FirstBloodKill).Append("\n");
            sb.Append("  FirstInhibitorAssist: ").Append(FirstInhibitorAssist).Append("\n");
            sb.Append("  FirstInhibitorKill: ").Append(FirstInhibitorKill).Append("\n");
            sb.Append("  FirstTowerAssist: ").Append(FirstTowerAssist).Append("\n");
            sb.Append("  FirstTowerKill: ").Append(FirstTowerKill).Append("\n");
            sb.Append("  GameEndedInEarlySurrender: ").Append(GameEndedInEarlySurrender).Append("\n");
            sb.Append("  GameEndedInSurrender: ").Append(GameEndedInSurrender).Append("\n");
            sb.Append("  GoldEarned: ").Append(GoldEarned).Append("\n");
            sb.Append("  GoldSpent: ").Append(GoldSpent).Append("\n");
            sb.Append("  InhibitorKills: ").Append(InhibitorKills).Append("\n");
            sb.Append("  Item0: ").Append(Item0).Append("\n");
            sb.Append("  Item1: ").Append(Item1).Append("\n");
            sb.Append("  Item2: ").Append(Item2).Append("\n");
            sb.Append("  Item3: ").Append(Item3).Append("\n");
            sb.Append("  Item4: ").Append(Item4).Append("\n");
            sb.Append("  Item5: ").Append(Item5).Append("\n");
            sb.Append("  Item6: ").Append(Item6).Append("\n");
            sb.Append("  KillingSprees: ").Append(KillingSprees).Append("\n");
            sb.Append("  Kills: ").Append(Kills).Append("\n");
            sb.Append("  LargestCriticalStrike: ").Append(LargestCriticalStrike).Append("\n");
            sb.Append("  LargestKillingSpree: ").Append(LargestKillingSpree).Append("\n");
            sb.Append("  LargestMultiKill: ").Append(LargestMultiKill).Append("\n");
            sb.Append("  LongestTimeSpentLiving: ").Append(LongestTimeSpentLiving).Append("\n");
            sb.Append("  MagicDamageDealt: ").Append(MagicDamageDealt).Append("\n");
            sb.Append("  MagicDamageDealtToChampions: ").Append(MagicDamageDealtToChampions).Append("\n");
            sb.Append("  MagicalDamageTaken: ").Append(MagicalDamageTaken).Append("\n");
            sb.Append("  NeutralMinionsKilled: ").Append(NeutralMinionsKilled).Append("\n");
            sb.Append("  NeutralMinionsKilledEnemyJungle: ").Append(NeutralMinionsKilledEnemyJungle).Append("\n");
            sb.Append("  NeutralMinionsKilledTeamJungle: ").Append(NeutralMinionsKilledTeamJungle).Append("\n");
            sb.Append("  ObjectivePlayerScore: ").Append(ObjectivePlayerScore).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  PentaKills: ").Append(PentaKills).Append("\n");
            sb.Append("  Perk0: ").Append(Perk0).Append("\n");
            sb.Append("  Perk0Var1: ").Append(Perk0Var1).Append("\n");
            sb.Append("  Perk0Var2: ").Append(Perk0Var2).Append("\n");
            sb.Append("  Perk0Var3: ").Append(Perk0Var3).Append("\n");
            sb.Append("  Perk1: ").Append(Perk1).Append("\n");
            sb.Append("  Perk1Var1: ").Append(Perk1Var1).Append("\n");
            sb.Append("  Perk1Var2: ").Append(Perk1Var2).Append("\n");
            sb.Append("  Perk1Var3: ").Append(Perk1Var3).Append("\n");
            sb.Append("  Perk2: ").Append(Perk2).Append("\n");
            sb.Append("  Perk2Var1: ").Append(Perk2Var1).Append("\n");
            sb.Append("  Perk2Var2: ").Append(Perk2Var2).Append("\n");
            sb.Append("  Perk2Var3: ").Append(Perk2Var3).Append("\n");
            sb.Append("  Perk3: ").Append(Perk3).Append("\n");
            sb.Append("  Perk3Var1: ").Append(Perk3Var1).Append("\n");
            sb.Append("  Perk3Var2: ").Append(Perk3Var2).Append("\n");
            sb.Append("  Perk3Var3: ").Append(Perk3Var3).Append("\n");
            sb.Append("  Perk4: ").Append(Perk4).Append("\n");
            sb.Append("  Perk4Var1: ").Append(Perk4Var1).Append("\n");
            sb.Append("  Perk4Var2: ").Append(Perk4Var2).Append("\n");
            sb.Append("  Perk4Var3: ").Append(Perk4Var3).Append("\n");
            sb.Append("  Perk5: ").Append(Perk5).Append("\n");
            sb.Append("  Perk5Var1: ").Append(Perk5Var1).Append("\n");
            sb.Append("  Perk5Var2: ").Append(Perk5Var2).Append("\n");
            sb.Append("  Perk5Var3: ").Append(Perk5Var3).Append("\n");
            sb.Append("  PerkPrimaryStyle: ").Append(PerkPrimaryStyle).Append("\n");
            sb.Append("  PerkSubStyle: ").Append(PerkSubStyle).Append("\n");
            sb.Append("  PhysicalDamageDealt: ").Append(PhysicalDamageDealt).Append("\n");
            sb.Append("  PhysicalDamageDealtToChampions: ").Append(PhysicalDamageDealtToChampions).Append("\n");
            sb.Append("  PhysicalDamageTaken: ").Append(PhysicalDamageTaken).Append("\n");
            sb.Append("  PlayerScore0: ").Append(PlayerScore0).Append("\n");
            sb.Append("  PlayerScore1: ").Append(PlayerScore1).Append("\n");
            sb.Append("  PlayerScore2: ").Append(PlayerScore2).Append("\n");
            sb.Append("  PlayerScore3: ").Append(PlayerScore3).Append("\n");
            sb.Append("  PlayerScore4: ").Append(PlayerScore4).Append("\n");
            sb.Append("  PlayerScore5: ").Append(PlayerScore5).Append("\n");
            sb.Append("  PlayerScore6: ").Append(PlayerScore6).Append("\n");
            sb.Append("  PlayerScore7: ").Append(PlayerScore7).Append("\n");
            sb.Append("  PlayerScore8: ").Append(PlayerScore8).Append("\n");
            sb.Append("  PlayerScore9: ").Append(PlayerScore9).Append("\n");
            sb.Append("  QuadraKills: ").Append(QuadraKills).Append("\n");
            sb.Append("  SightWardsBoughtInGame: ").Append(SightWardsBoughtInGame).Append("\n");
            sb.Append("  TeamEarlySurrendered: ").Append(TeamEarlySurrendered).Append("\n");
            sb.Append("  TimeCCingOthers: ").Append(TimeCCingOthers).Append("\n");
            sb.Append("  TotalDamageDealt: ").Append(TotalDamageDealt).Append("\n");
            sb.Append("  TotalDamageDealtToChampions: ").Append(TotalDamageDealtToChampions).Append("\n");
            sb.Append("  TotalDamageTaken: ").Append(TotalDamageTaken).Append("\n");
            sb.Append("  TotalHeal: ").Append(TotalHeal).Append("\n");
            sb.Append("  TotalMinionsKilled: ").Append(TotalMinionsKilled).Append("\n");
            sb.Append("  TotalPlayerScore: ").Append(TotalPlayerScore).Append("\n");
            sb.Append("  TotalScoreRank: ").Append(TotalScoreRank).Append("\n");
            sb.Append("  TotalTimeCrowdControlDealt: ").Append(TotalTimeCrowdControlDealt).Append("\n");
            sb.Append("  TotalUnitsHealed: ").Append(TotalUnitsHealed).Append("\n");
            sb.Append("  TripleKills: ").Append(TripleKills).Append("\n");
            sb.Append("  TrueDamageDealt: ").Append(TrueDamageDealt).Append("\n");
            sb.Append("  TrueDamageDealtToChampions: ").Append(TrueDamageDealtToChampions).Append("\n");
            sb.Append("  TrueDamageTaken: ").Append(TrueDamageTaken).Append("\n");
            sb.Append("  TurretKills: ").Append(TurretKills).Append("\n");
            sb.Append("  UnrealKills: ").Append(UnrealKills).Append("\n");
            sb.Append("  VisionScore: ").Append(VisionScore).Append("\n");
            sb.Append("  VisionWardsBoughtInGame: ").Append(VisionWardsBoughtInGame).Append("\n");
            sb.Append("  WardsKilled: ").Append(WardsKilled).Append("\n");
            sb.Append("  WardsPlaced: ").Append(WardsPlaced).Append("\n");
            sb.Append("  Win: ").Append(Win).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}