using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsSummonerLeaguesDTO
    {
        [DataMember(Name = "summonerLeagues")]
        public LeaguesLcdsSummonerLeagueListDTO[] SummonerLeagues { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsSummonerLeaguesDTO {\n");
            sb.Append("  SummonerLeagues: ").Append(SummonerLeagues).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}