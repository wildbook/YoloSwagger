using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyTimer
    {
        [DataMember(Name = "countdown")]
        public long Countdown { get; set; }

        [DataMember(Name = "enabled")]
        public bool Enabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyTimer {\n");
            sb.Append("  Countdown: ").Append(Countdown).Append("\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}