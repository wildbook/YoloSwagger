using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSummonerEndOfGamePoints
    {
        [DataMember(Name = "pointsUntilNextReroll")]
        public ulong PointsUntilNextReroll { get; set; }

        [DataMember(Name = "rerollCount")]
        public uint RerollCount { get; set; }

        [DataMember(Name = "totalPoints")]
        public ulong TotalPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerEndOfGamePoints {\n");
            sb.Append("  PointsUntilNextReroll: ").Append(PointsUntilNextReroll).Append("\n");
            sb.Append("  RerollCount: ").Append(RerollCount).Append("\n");
            sb.Append("  TotalPoints: ").Append(TotalPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}