using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RankedScoutingTopChampionDTO
    {
        [DataMember(Name = "gameCount")]
        int GameCount { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "kda")]
        float Kda { get; set; }

        [DataMember(Name = "rank")]
        int Rank { get; set; }

        [DataMember(Name = "winCount")]
        int WinCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RankedScoutingTopChampionDTO {\n");
            sb.Append("  GameCount: ").Append(GameCount).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Kda: ").Append(Kda).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  WinCount: ").Append(WinCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}