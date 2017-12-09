using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderMatchmakingReadyCheckResource
    {
        [DataMember(Name = "declinerIds")]
        public ulong[] DeclinerIds { get; set; }

        [DataMember(Name = "dodgeWarning")]
        public LolLobbyTeamBuilderMatchmakingDodgeWarning DodgeWarning { get; set; }

        [DataMember(Name = "playerResponse")]
        public LolLobbyTeamBuilderMatchmakingReadyCheckResponse PlayerResponse { get; set; }

        [DataMember(Name = "state")]
        public LolLobbyTeamBuilderMatchmakingReadyCheckState State { get; set; }

        [DataMember(Name = "timer")]
        public float Timer { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderMatchmakingReadyCheckResource {\n");
            sb.Append("  DeclinerIds: ").Append(DeclinerIds).Append("\n");
            sb.Append("  DodgeWarning: ").Append(DodgeWarning).Append("\n");
            sb.Append("  PlayerResponse: ").Append(PlayerResponse).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}