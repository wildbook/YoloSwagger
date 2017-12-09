using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEndOfGameGameflowSession
    {
        [DataMember(Name = "gameClient")]
        public LolEndOfGameGameflowClient GameClient { get; set; }

        [DataMember(Name = "gameData")]
        public LolEndOfGameGameflowGameData GameData { get; set; }

        [DataMember(Name = "phase")]
        public LolEndOfGameGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEndOfGameGameflowSession {\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}