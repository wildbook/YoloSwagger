using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderChampSelectPickableChampions
    {
        [DataMember(Name = "championIds")]
        public int[] ChampionIds { get; set; }

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