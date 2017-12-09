using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchmakingGameflowSession
    {
        [DataMember(Name = "gameData")]
        public LolMatchmakingGameflowGameData GameData { get; set; }

        [DataMember(Name = "gameDodge")]
        public LolMatchmakingGameflowGameDodge GameDodge { get; set; }

        [DataMember(Name = "phase")]
        public LolMatchmakingGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingGameflowSession {\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("  GameDodge: ").Append(GameDodge).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}