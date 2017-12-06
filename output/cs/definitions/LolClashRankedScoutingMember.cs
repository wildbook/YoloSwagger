using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashRankedScoutingMember
    {
        [DataMember(Name = "championScoutingData")]
        LolClashRankedScoutingTopChampion[] ChampionScoutingData { get; set; }

        [DataMember(Name = "playerId")]
        ulong PlayerId { get; set; }

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