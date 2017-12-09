using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsChampionPlayableCounts
    {
        [DataMember(Name = "championsFreeToPlay")]
        public uint ChampionsFreeToPlay { get; set; }

        [DataMember(Name = "championsFreeToPlayReward")]
        public uint ChampionsFreeToPlayReward { get; set; }

        [DataMember(Name = "championsOwned")]
        public uint ChampionsOwned { get; set; }

        [DataMember(Name = "championsRented")]
        public uint ChampionsRented { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampionPlayableCounts {\n");
            sb.Append("  ChampionsFreeToPlay: ").Append(ChampionsFreeToPlay).Append("\n");
            sb.Append("  ChampionsFreeToPlayReward: ").Append(ChampionsFreeToPlayReward).Append("\n");
            sb.Append("  ChampionsOwned: ").Append(ChampionsOwned).Append("\n");
            sb.Append("  ChampionsRented: ").Append(ChampionsRented).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}