using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct SummonerLevelAndPoints
    {
        [DataMember(Name = "infPoints")]
        ulong InfPoints { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint SummonerLevel { get; set; }

        [DataMember(Name = "expPoints")]
        ulong ExpPoints { get; set; }

        [DataMember(Name = "sumId")]
        ulong SumId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class SummonerLevelAndPoints {\n");
            sb.Append("  InfPoints: ").Append(InfPoints).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  ExpPoints: ").Append(ExpPoints).Append("\n");
            sb.Append("  SumId: ").Append(SumId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}