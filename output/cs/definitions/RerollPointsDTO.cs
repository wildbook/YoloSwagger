using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RerollPointsDTO
    {
        [DataMember(Name = "numberOfRolls")]
        uint NumberOfRolls { get; set; }

        [DataMember(Name = "maxRolls")]
        uint MaxRolls { get; set; }

        [DataMember(Name = "pointsCostToRoll")]
        ulong PointsCostToRoll { get; set; }

        [DataMember(Name = "pointsToReroll")]
        ulong PointsToReroll { get; set; }

        [DataMember(Name = "currentPoints")]
        ulong CurrentPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RerollPointsDTO {\n");
            sb.Append("  NumberOfRolls: ").Append(NumberOfRolls).Append("\n");
            sb.Append("  MaxRolls: ").Append(MaxRolls).Append("\n");
            sb.Append("  PointsCostToRoll: ").Append(PointsCostToRoll).Append("\n");
            sb.Append("  PointsToReroll: ").Append(PointsToReroll).Append("\n");
            sb.Append("  CurrentPoints: ").Append(CurrentPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}