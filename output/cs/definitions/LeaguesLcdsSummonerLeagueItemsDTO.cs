using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsSummonerLeagueItemsDTO
    {
        [DataMember(Name = "summonerLeagues")]
        public LeaguesLcdsLeagueItemDTO[] SummonerLeagues { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsSummonerLeagueItemsDTO {\n");
            sb.Append("  SummonerLeagues: ").Append(SummonerLeagues).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}