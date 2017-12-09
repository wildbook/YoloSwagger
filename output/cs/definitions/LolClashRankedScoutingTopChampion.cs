using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRankedScoutingTopChampion
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "gameCount")]
        public int GameCount { get; set; }

        [DataMember(Name = "kda")]
        public string Kda { get; set; }

        [DataMember(Name = "kdaClassification")]
        public LolClashKdaClassification KdaClassification { get; set; }

        [DataMember(Name = "rank")]
        public int Rank { get; set; }

        [DataMember(Name = "winCount")]
        public int WinCount { get; set; }

        [DataMember(Name = "winRate")]
        public int WinRate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRankedScoutingTopChampion {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  GameCount: ").Append(GameCount).Append("\n");
            sb.Append("  Kda: ").Append(Kda).Append("\n");
            sb.Append("  KdaClassification: ").Append(KdaClassification).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  WinCount: ").Append(WinCount).Append("\n");
            sb.Append("  WinRate: ").Append(WinRate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}