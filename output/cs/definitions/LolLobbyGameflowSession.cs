using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyGameflowSession
    {
        [DataMember(Name = "gameClient")]
        public LolLobbyGameflowGameClient GameClient { get; set; }

        [DataMember(Name = "gameDodge")]
        public LolLobbyGameflowGameDodge GameDodge { get; set; }

        [DataMember(Name = "phase")]
        public LolLobbyGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyGameflowSession {\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("  GameDodge: ").Append(GameDodge).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}