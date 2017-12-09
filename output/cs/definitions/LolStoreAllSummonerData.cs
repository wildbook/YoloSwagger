using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreAllSummonerData
    {
        [DataMember(Name = "summoner")]
        public LolStoreSummoner Summoner { get; set; }

        [DataMember(Name = "summonerLevelAndPoints")]
        public LolStoreSummonerLevelAndPoints SummonerLevelAndPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreAllSummonerData {\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}