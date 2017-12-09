using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksSummonerRerollPoints
    {
        [DataMember(Name = "currentPoints")]
        public ulong CurrentPoints { get; set; }

        [DataMember(Name = "maxRolls")]
        public uint MaxRolls { get; set; }

        [DataMember(Name = "numberOfRolls")]
        public uint NumberOfRolls { get; set; }

        [DataMember(Name = "pointsCostToRoll")]
        public ulong PointsCostToRoll { get; set; }

        [DataMember(Name = "pointsToReroll")]
        public ulong PointsToReroll { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksSummonerRerollPoints {\n");
            sb.Append("  CurrentPoints: ").Append(CurrentPoints).Append("\n");
            sb.Append("  MaxRolls: ").Append(MaxRolls).Append("\n");
            sb.Append("  NumberOfRolls: ").Append(NumberOfRolls).Append("\n");
            sb.Append("  PointsCostToRoll: ").Append(PointsCostToRoll).Append("\n");
            sb.Append("  PointsToReroll: ").Append(PointsToReroll).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}