using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEndOfGameGameflowSession
    {
        [DataMember(Name = "gameClient")]
        LolEndOfGameGameflowClient GameClient { get; set; }

        [DataMember(Name = "gameData")]
        LolEndOfGameGameflowGameData GameData { get; set; }

        [DataMember(Name = "phase")]
        LolEndOfGameGameflowPhase Phase { get; set; }

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