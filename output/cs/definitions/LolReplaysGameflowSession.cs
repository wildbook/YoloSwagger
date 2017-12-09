using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysGameflowSession
    {
        [DataMember(Name = "gameClient")]
        public LolReplaysGameflowGameClient GameClient { get; set; }

        [DataMember(Name = "phase")]
        public LolReplaysGameflowPhase Phase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysGameflowSession {\n");
            sb.Append("  GameClient: ").Append(GameClient).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}