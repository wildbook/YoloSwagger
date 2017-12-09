using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowGameflowSession
    {
        [DataMember(Name = "gameClient")]
        public LolGameflowGameflowGameClient GameClient { get; set; }

        [DataMember(Name = "gameData")]
        public LolGameflowGameflowGameData GameData { get; set; }

        [DataMember(Name = "gameDodge")]
        public LolGameflowGameflowGameDodge GameDodge { get; set; }

        [DataMember(Name = "map")]
        public LolGameflowGameflowGameMap Map { get; set; }

        [DataMember(Name = "phase")]
        public LolGameflowGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowSession {\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("  GameDodge: ").Append(GameDodge).Append("\n");
            sb.Append("  Map: ").Append(Map).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}