using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatGameflowGameData
    {
        [DataMember(Name = "playerChampionSelections")]
        public LolChatChampSelection[] PlayerChampionSelections { get; set; }

        [DataMember(Name = "queue")]
        public LolChatQueue Queue { get; set; }

        [DataMember(Name = "teamOne")]
        public LolChatTeamPlayerEntry[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public LolChatTeamPlayerEntry[] TeamTwo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatGameflowGameData {\n");
            sb.Append("  PlayerChampionSelections: ").Append(PlayerChampionSelections).Append("\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}