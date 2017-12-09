using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesGameflowSession
    {
        [DataMember(Name = "gameData")]
        public LolLeaguesGameflowGameData GameData { get; set; }

        [DataMember(Name = "phase")]
        public LolLeaguesGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesGameflowSession {\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}