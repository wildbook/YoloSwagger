using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoadoutsGameflowSession
    {
        [DataMember(Name = "gameData")]
        public LolLoadoutsGameflowGameData GameData { get; set; }

        [DataMember(Name = "phase")]
        public LolLoadoutsGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsGameflowSession {\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}