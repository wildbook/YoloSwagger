using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeagueChampAndStat
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "totalGamePlayed")]
        public long TotalGamePlayed { get; set; }

        [DataMember(Name = "winRate")]
        public float WinRate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueChampAndStat {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  TotalGamePlayed: ").Append(TotalGamePlayed).Append("\n");
            sb.Append("  WinRate: ").Append(WinRate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}