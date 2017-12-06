using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig
    {
        [DataMember(Name = "SuggestedPlayers")]
        LolSuggestedPlayersSuggestedPlayersConfig SuggestedPlayers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSuggestedPlayersSuggestedPlayersDynamicClientConfig {\n");
            sb.Append("  SuggestedPlayers: ").Append(SuggestedPlayers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}