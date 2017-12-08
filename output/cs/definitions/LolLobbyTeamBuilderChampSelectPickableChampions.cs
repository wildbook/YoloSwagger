using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampSelectPickableChampions
    {
        [DataMember(Name = "championIds")]
        int[] ChampionIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampSelectPickableChampions {\n");
            sb.Append("  ChampionIds: ").Append(ChampionIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}