using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderActionV1
    {
        [DataMember(Name = "actionId")]
        public int ActionId { get; set; }

        [DataMember(Name = "actorCellId")]
        public int ActorCellId { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "completed")]
        public bool Completed { get; set; }

        [DataMember(Name = "duration")]
        public long Duration { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

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