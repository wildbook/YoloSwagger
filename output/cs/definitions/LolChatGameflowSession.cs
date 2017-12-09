using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatGameflowSession
    {
        [DataMember(Name = "gameData")]
        public LolChatGameflowGameData GameData { get; set; }

        [DataMember(Name = "map")]
        public LolChatGameflowGameMap Map { get; set; }

        [DataMember(Name = "phase")]
        public LolChatGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatGameflowSession {\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("  Map: ").Append(Map).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}