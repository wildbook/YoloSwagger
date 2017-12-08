using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameChampionMasteryMini
    {
        [DataMember(Name = "championLevel")]
        long ChampionLevel { get; set; }

        [DataMember(Name = "playerId")]
        ulong PlayerId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameChampionMasteryMini {\n");
            sb.Append("  ChampionLevel: ").Append(ChampionLevel).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}