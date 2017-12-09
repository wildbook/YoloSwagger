using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPftGameflowGameDodge
    {
        [DataMember(Name = "dodgeIds")]
        public ulong[] DodgeIds { get; set; }

        [DataMember(Name = "state")]
        public LolPftGameflowGameDodgeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPftGameflowGameDodge {\n");
            sb.Append("  DodgeIds: ").Append(DodgeIds).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}