using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ChampSelectLcdsRollResult
    {
        [DataMember(Name = "pointSummary")]
        ChampSelectLcdsPointSummary PointSummary { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsRollResult {\n");
            sb.Append("  PointSummary: ").Append(PointSummary).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}