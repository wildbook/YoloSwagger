using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameChampionMasteryUpdate
    {
        [DataMember(Name = "bonusPointsGained")]
        long BonusPointsGained { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "grade")]
        string Grade { get; set; }

        [DataMember(Name = "hasLeveledUp")]
        bool HasLeveledUp { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "level")]
        long Level { get; set; }

        [DataMember(Name = "levelUpList")]
        LolEndOfGameChampionMasteryMini[] LevelUpList { get; set; }

        [DataMember(Name = "memberGrades")]
        LolEndOfGameChampionMasteryGrade[] MemberGrades { get; set; }

        [DataMember(Name = "playerId")]
        ulong PlayerId { get; set; }

        [DataMember(Name = "pointsBeforeGame")]
        long PointsBeforeGame { get; set; }

        [DataMember(Name = "pointsGained")]
        long PointsGained { get; set; }

        [DataMember(Name = "pointsGainedIndividualContribution")]
        long PointsGainedIndividualContribution { get; set; }

        [DataMember(Name = "pointsSinceLastLevelBeforeGame")]
        long PointsSinceLastLevelBeforeGame { get; set; }

        [DataMember(Name = "pointsUntilNextLevelAfterGame")]
        long PointsUntilNextLevelAfterGame { get; set; }

        [DataMember(Name = "pointsUntilNextLevelBeforeGame")]
        long PointsUntilNextLevelBeforeGame { get; set; }

        [DataMember(Name = "score")]
        long Score { get; set; }

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