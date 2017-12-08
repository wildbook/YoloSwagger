using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderRerollStateV1
    {
        [DataMember(Name = "allowRerolling")]
        bool AllowRerolling { get; set; }

        [DataMember(Name = "rerollsRemaining")]
        uint RerollsRemaining { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderRerollStateV1 {\n");
            sb.Append("  AllowRerolling: ").Append(AllowRerolling).Append("\n");
            sb.Append("  RerollsRemaining: ").Append(RerollsRemaining).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}