using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoadoutsGameflowSession
    {
        [DataMember(Name = "phase")]
        LolLoadoutsGameflowPhase Phase { get; set; }

        [DataMember(Name = "gameData")]
        LolLoadoutsGameflowGameData GameData { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoadoutsGameflowSession {\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("  GameData: ").Append(GameData).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}