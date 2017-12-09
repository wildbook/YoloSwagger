using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashMatchmakingDodgeData
    {
        [DataMember(Name = "dodgerId")]
        public ulong DodgerId { get; set; }

        [DataMember(Name = "state")]
        public LolClashMatchmakingDodgeState State { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashMatchmakingDodgeData {\n");
            sb.Append("  DodgerId: ").Append(DodgerId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}