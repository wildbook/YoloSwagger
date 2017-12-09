using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameflowSession
    {
        [DataMember(Name = "gameData")]
        public GameflowGameData GameData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameflowSession {\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}