using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchmakingMatchmakingReadyCheckResource
    {
        [DataMember(Name = "declinerIds")]
        public ulong[] DeclinerIds { get; set; }

        [DataMember(Name = "dodgeWarning")]
        public LolMatchmakingMatchmakingDodgeWarning DodgeWarning { get; set; }

        [DataMember(Name = "playerResponse")]
        public LolMatchmakingMatchmakingReadyCheckResponse PlayerResponse { get; set; }

        [DataMember(Name = "state")]
        public LolMatchmakingMatchmakingReadyCheckState State { get; set; }

        [DataMember(Name = "suppressUx")]
        public bool SuppressUx { get; set; }

        [DataMember(Name = "timer")]
        public float Timer { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingMatchmakingReadyCheckResource {\n");
            sb.Append("  DeclinerIds: ").Append(DeclinerIds).Append("\n");
            sb.Append("  DodgeWarning: ").Append(DodgeWarning).Append("\n");
            sb.Append("  PlayerResponse: ").Append(PlayerResponse).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SuppressUx: ").Append(SuppressUx).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}