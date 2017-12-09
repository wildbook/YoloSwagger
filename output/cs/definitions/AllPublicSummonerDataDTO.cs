using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct AllPublicSummonerDataDTO
    {
        [DataMember(Name = "summoner")]
        public BasePublicSummonerDTO Summoner { get; set; }

        [DataMember(Name = "summonerLevel")]
        public SummonerLevel SummonerLevel { get; set; }

        [DataMember(Name = "summonerLevelAndPoints")]
        public SummonerLevelAndPoints SummonerLevelAndPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class AllPublicSummonerDataDTO {\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}