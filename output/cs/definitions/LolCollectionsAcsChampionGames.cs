using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsAcsChampionGames
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "queue")]
        int Queue { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsAcsChampionGames {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}