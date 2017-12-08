using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderMatchmakingDodgeData
    {
        [DataMember(Name = "state")]
        LolLobbyTeamBuilderMatchmakingDodgeState State { get; set; }

        [DataMember(Name = "dodgerId")]
        ulong DodgerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderMatchmakingDodgeData {\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  DodgerId: ").Append(DodgerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}