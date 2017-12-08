using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeagueChampAndStat
    {
        [DataMember(Name = "winRate")]
        float WinRate { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "totalGamePlayed")]
        long TotalGamePlayed { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueChampAndStat {\n");
            sb.Append("  WinRate: ").Append(WinRate).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  TotalGamePlayed: ").Append(TotalGamePlayed).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}