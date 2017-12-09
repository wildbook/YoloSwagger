using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderCellsV1
    {
        [DataMember(Name = "alliedTeam")]
        public LolLobbyTeamBuilderCellV1[] AlliedTeam { get; set; }

        [DataMember(Name = "enemyTeam")]
        public LolLobbyTeamBuilderCellV1[] EnemyTeam { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderCellsV1 {\n");
            sb.Append("  AlliedTeam: ").Append(AlliedTeam).Append("\n");
            sb.Append("  EnemyTeam: ").Append(EnemyTeam).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}