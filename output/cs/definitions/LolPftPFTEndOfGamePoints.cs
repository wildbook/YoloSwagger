using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftPFTEndOfGamePoints
    {
        [DataMember(Name = "rerollCount")]
        int RerollCount { get; set; }

        [DataMember(Name = "totalPoints")]
        int TotalPoints { get; set; }

        [DataMember(Name = "pointChangeFromGameplay")]
        int PointChangeFromGameplay { get; set; }

        [DataMember(Name = "pointsUsed")]
        int PointsUsed { get; set; }

        [DataMember(Name = "previousPoints")]
        int PreviousPoints { get; set; }

        [DataMember(Name = "pointChangeFromChampionsOwned")]
        int PointChangeFromChampionsOwned { get; set; }

        [DataMember(Name = "pointsUntilNextReroll")]
        int PointsUntilNextReroll { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftPFTEndOfGamePoints {\n");
            sb.Append("  RerollCount: ").Append(RerollCount).Append("\n");
            sb.Append("  TotalPoints: ").Append(TotalPoints).Append("\n");
            sb.Append("  PointChangeFromGameplay: ").Append(PointChangeFromGameplay).Append("\n");
            sb.Append("  PointsUsed: ").Append(PointsUsed).Append("\n");
            sb.Append("  PreviousPoints: ").Append(PreviousPoints).Append("\n");
            sb.Append("  PointChangeFromChampionsOwned: ").Append(PointChangeFromChampionsOwned).Append("\n");
            sb.Append("  PointsUntilNextReroll: ").Append(PointsUntilNextReroll).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}