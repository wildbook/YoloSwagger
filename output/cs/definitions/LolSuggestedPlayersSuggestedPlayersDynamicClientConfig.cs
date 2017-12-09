using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSuggestedPlayersSuggestedPlayersDynamicClientConfig
    {
        [DataMember(Name = "SuggestedPlayers")]
        public LolSuggestedPlayersSuggestedPlayersConfig SuggestedPlayers { get; set; }

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