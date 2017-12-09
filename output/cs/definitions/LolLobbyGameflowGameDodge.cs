using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyGameflowGameDodge
    {
        [DataMember(Name = "dodgeIds")]
        public ulong[] DodgeIds { get; set; }

        [DataMember(Name = "phase")]
        public LolLobbyGameflowPhase Phase { get; set; }

        [DataMember(Name = "state")]
        public LolLobbyMatchmakingDodgeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyGameflowGameDodge {\n");
            sb.Append("  DodgeIds: ").Append(DodgeIds).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}