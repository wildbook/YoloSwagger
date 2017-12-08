using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatGameflowSession
    {
        [DataMember(Name = "phase")]
        LolChatGameflowPhase Phase { get; set; }

        [DataMember(Name = "map")]
        LolChatGameflowGameMap Map { get; set; }

        [DataMember(Name = "gameData")]
        LolChatGameflowGameData GameData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatGameflowSession {\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("  Map: ").Append(Map).Append("\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}