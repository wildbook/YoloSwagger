using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsChampionStatInfo
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "stats")]
        public LeaguesLcdsAggregatedStat[] Stats { get; set; }

        [DataMember(Name = "totalGamesPlayed")]
        public int TotalGamesPlayed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsChampionStatInfo {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Stats: ").Append(Stats).Append("\n");
            sb.Append("  TotalGamesPlayed: ").Append(TotalGamesPlayed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}