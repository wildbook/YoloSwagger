using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsChampionStatInfo
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "stats")]
        LeaguesLcdsAggregatedStat[] Stats { get; set; }

        [DataMember(Name = "totalGamesPlayed")]
        int TotalGamesPlayed { get; set; }

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