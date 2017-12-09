using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterPlayerAggregatedStatsDTO
    {
        [DataMember(Name = "rawStatsMax")]
        public Dictionary<string, int> RawStatsMax { get; set; }

        [DataMember(Name = "rawStatsSum")]
        public Dictionary<string, int> RawStatsSum { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterPlayerAggregatedStatsDTO {\n");
            sb.Append("  RawStatsMax: ").Append(RawStatsMax).Append("\n");
            sb.Append("  RawStatsSum: ").Append(RawStatsSum).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}