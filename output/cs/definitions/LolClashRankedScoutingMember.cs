using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRankedScoutingMember
    {
        [DataMember(Name = "championScoutingData")]
        public LolClashRankedScoutingTopChampion[] ChampionScoutingData { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRankedScoutingMember {\n");
            sb.Append("  ChampionScoutingData: ").Append(ChampionScoutingData).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}