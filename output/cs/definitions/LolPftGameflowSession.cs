using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPftGameflowSession
    {
        [DataMember(Name = "gameDodge")]
        LolPftGameflowGameDodge GameDodge { get; set; }

        [DataMember(Name = "phase")]
        LolPftGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftGameflowSession {\n");
            sb.Append("  GameDodge: ").Append(GameDodge).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}