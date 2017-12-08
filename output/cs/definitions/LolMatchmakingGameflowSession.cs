using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingGameflowSession
    {
        [DataMember(Name = "phase")]
        LolMatchmakingGameflowPhase Phase { get; set; }

        [DataMember(Name = "gameDodge")]
        LolMatchmakingGameflowGameDodge GameDodge { get; set; }

        [DataMember(Name = "gameData")]
        LolMatchmakingGameflowGameData GameData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingGameflowSession {\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("  GameDodge: ").Append(GameDodge).Append("\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}