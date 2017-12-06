using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderActionV1
    {
        [DataMember(Name = "actionId")]
        int ActionId { get; set; }

        [DataMember(Name = "actorCellId")]
        int ActorCellId { get; set; }

        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "completed")]
        bool Completed { get; set; }

        [DataMember(Name = "duration")]
        long Duration { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderActionV1 {\n");
            sb.Append("  ActionId: ").Append(ActionId).Append("\n");
            sb.Append("  ActorCellId: ").Append(ActorCellId).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Completed: ").Append(Completed).Append("\n");
            sb.Append("  Duration: ").Append(Duration).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}