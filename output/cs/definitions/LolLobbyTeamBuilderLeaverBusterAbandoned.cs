using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderLeaverBusterAbandoned
    {
        [DataMember(Name = "abandonerName")]
        string AbandonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderLeaverBusterAbandoned {\n");
            sb.Append("  AbandonerName: ").Append(AbandonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}