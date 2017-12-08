using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolReplaysGameflowSession
    {
        [DataMember(Name = "phase")]
        LolReplaysGameflowPhase Phase { get; set; }

        [DataMember(Name = "gameClient")]
        LolReplaysGameflowGameClient GameClient { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysGameflowSession {\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}