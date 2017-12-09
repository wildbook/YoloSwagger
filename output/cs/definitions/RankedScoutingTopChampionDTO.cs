using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RankedScoutingTopChampionDTO
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "gameCount")]
        public int GameCount { get; set; }

        [DataMember(Name = "kda")]
        public float Kda { get; set; }

        [DataMember(Name = "rank")]
        public int Rank { get; set; }

        [DataMember(Name = "winCount")]
        public int WinCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RankedScoutingTopChampionDTO {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  GameCount: ").Append(GameCount).Append("\n");
            sb.Append("  Kda: ").Append(Kda).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  WinCount: ").Append(WinCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}