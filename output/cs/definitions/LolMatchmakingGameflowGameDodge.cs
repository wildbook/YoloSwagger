using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchmakingGameflowGameDodge
    {
        [DataMember(Name = "dodgeIds")]
        public ulong[] DodgeIds { get; set; }

        [DataMember(Name = "state")]
        public LolMatchmakingMatchmakingDodgeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchmakingGameflowGameDodge {\n");
            sb.Append("  DodgeIds: ").Append(DodgeIds).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}