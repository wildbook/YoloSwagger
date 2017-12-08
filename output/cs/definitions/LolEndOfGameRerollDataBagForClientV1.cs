using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameRerollDataBagForClientV1
    {
        [DataMember(Name = "totalPoints")]
        long TotalPoints { get; set; }

        [DataMember(Name = "pointsGainedLastGame")]
        long PointsGainedLastGame { get; set; }

        [DataMember(Name = "rerollCount")]
        int RerollCount { get; set; }

        [DataMember(Name = "maximumRerolls")]
        uint MaximumRerolls { get; set; }

        [DataMember(Name = "pointCostOfReroll")]
        long PointCostOfReroll { get; set; }

        [DataMember(Name = "pointsUntilNextReroll")]
        long PointsUntilNextReroll { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameRerollDataBagForClientV1 {\n");
            sb.Append("  TotalPoints: ").Append(TotalPoints).Append("\n");
            sb.Append("  PointsGainedLastGame: ").Append(PointsGainedLastGame).Append("\n");
            sb.Append("  RerollCount: ").Append(RerollCount).Append("\n");
            sb.Append("  MaximumRerolls: ").Append(MaximumRerolls).Append("\n");
            sb.Append("  PointCostOfReroll: ").Append(PointCostOfReroll).Append("\n");
            sb.Append("  PointsUntilNextReroll: ").Append(PointsUntilNextReroll).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}