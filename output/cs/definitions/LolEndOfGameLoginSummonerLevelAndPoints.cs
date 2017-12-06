using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameLoginSummonerLevelAndPoints
    {
        [DataMember(Name = "expPoints")]
        ulong ExpPoints { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameLoginSummonerLevelAndPoints {\n");
            sb.Append("  ExpPoints: ").Append(ExpPoints).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}