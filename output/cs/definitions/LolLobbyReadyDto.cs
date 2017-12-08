using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyReadyDto
    {
        [DataMember(Name = "ready")]
        bool Ready { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyReadyDto {\n");
            sb.Append("  Ready: ").Append(Ready).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}