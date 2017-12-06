using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampSelectAction
    {
        [DataMember(Name = "actorCellId")]
        long ActorCellId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "completed")]
        bool Completed { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampSelectAction {\n");
            sb.Append("  ActorCellId: ").Append(ActorCellId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Completed: ").Append(Completed).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}