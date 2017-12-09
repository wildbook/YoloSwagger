using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLoginAllSummonerData
    {
        [DataMember(Name = "summonerLevelAndPoints")]
        public LolLootLoginSummonerLevelAndPoints SummonerLevelAndPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLoginAllSummonerData {\n");
            sb.Append("  SummonerLevelAndPoints: ").Append(SummonerLevelAndPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}