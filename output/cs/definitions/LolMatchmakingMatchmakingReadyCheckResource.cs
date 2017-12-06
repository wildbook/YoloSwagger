using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchmakingMatchmakingReadyCheckResource
    {
        [DataMember(Name = "declinerIds")]
        ulong[] DeclinerIds { get; set; }

        [DataMember(Name = "dodgeWarning")]
        LolMatchmakingMatchmakingDodgeWarning DodgeWarning { get; set; }

        [DataMember(Name = "playerResponse")]
        LolMatchmakingMatchmakingReadyCheckResponse PlayerResponse { get; set; }

        [DataMember(Name = "state")]
        LolMatchmakingMatchmakingReadyCheckState State { get; set; }

        [DataMember(Name = "suppressUx")]
        bool SuppressUx { get; set; }

        [DataMember(Name = "timer")]
        float Timer { get; set; }

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