using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderCountdownTimer
    {
        [DataMember(Name = "counter")]
        public int Counter { get; set; }

        [DataMember(Name = "phaseName")]
        public string PhaseName { get; set; }

        [DataMember(Name = "timer")]
        public long Timer { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderCountdownTimer {\n");
            sb.Append("  Counter: ").Append(Counter).Append("\n");
            sb.Append("  PhaseName: ").Append(PhaseName).Append("\n");
            sb.Append("  Timer: ").Append(Timer).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}