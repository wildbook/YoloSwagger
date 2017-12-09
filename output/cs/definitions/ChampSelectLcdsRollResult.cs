using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsRollResult
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "pointSummary")]
        public ChampSelectLcdsPointSummary PointSummary { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsRollResult {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  PointSummary: ").Append(PointSummary).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}