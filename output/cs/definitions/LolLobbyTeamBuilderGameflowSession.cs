using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderGameflowSession
    {
        [DataMember(Name = "gameClient")]
        public LolLobbyTeamBuilderGameflowGameClient GameClient { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderGameflowSession {\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}