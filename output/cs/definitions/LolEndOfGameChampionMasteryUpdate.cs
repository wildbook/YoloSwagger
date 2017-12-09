using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEndOfGameChampionMasteryUpdate
    {
        [DataMember(Name = "bonusPointsGained")]
        public long BonusPointsGained { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "grade")]
        public string Grade { get; set; }

        [DataMember(Name = "hasLeveledUp")]
        public bool HasLeveledUp { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "level")]
        public long Level { get; set; }

        [DataMember(Name = "levelUpList")]
        public LolEndOfGameChampionMasteryMini[] LevelUpList { get; set; }

        [DataMember(Name = "memberGrades")]
        public LolEndOfGameChampionMasteryGrade[] MemberGrades { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        [DataMember(Name = "pointsBeforeGame")]
        public long PointsBeforeGame { get; set; }

        [DataMember(Name = "pointsGained")]
        public long PointsGained { get; set; }

        [DataMember(Name = "pointsGainedIndividualContribution")]
        public long PointsGainedIndividualContribution { get; set; }

        [DataMember(Name = "pointsSinceLastLevelBeforeGame")]
        public long PointsSinceLastLevelBeforeGame { get; set; }

        [DataMember(Name = "pointsUntilNextLevelAfterGame")]
        public long PointsUntilNextLevelAfterGame { get; set; }

        [DataMember(Name = "pointsUntilNextLevelBeforeGame")]
        public long PointsUntilNextLevelBeforeGame { get; set; }

        [DataMember(Name = "score")]
        public long Score { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameChampionMasteryUpdate {\n");
            sb.Append("  BonusPointsGained: ").Append(BonusPointsGained).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Grade: ").Append(Grade).Append("\n");
            sb.Append("  HasLeveledUp: ").Append(HasLeveledUp).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  LevelUpList: ").Append(LevelUpList).Append("\n");
            sb.Append("  MemberGrades: ").Append(MemberGrades).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  PointsBeforeGame: ").Append(PointsBeforeGame).Append("\n");
            sb.Append("  PointsGained: ").Append(PointsGained).Append("\n");
            sb.Append("  PointsGainedIndividualContribution: ").Append(PointsGainedIndividualContribution).Append("\n");
            sb.Append("  PointsSinceLastLevelBeforeGame: ").Append(PointsSinceLastLevelBeforeGame).Append("\n");
            sb.Append("  PointsUntilNextLevelAfterGame: ").Append(PointsUntilNextLevelAfterGame).Append("\n");
            sb.Append("  PointsUntilNextLevelBeforeGame: ").Append(PointsUntilNextLevelBeforeGame).Append("\n");
            sb.Append("  Score: ").Append(Score).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}