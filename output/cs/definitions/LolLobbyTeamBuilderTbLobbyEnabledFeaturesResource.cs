using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource
    {
        [DataMember(Name = "enabledFeatures")]
        public string[] EnabledFeatures { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbLobbyEnabledFeaturesResource {\n");
            sb.Append("  EnabledFeatures: ").Append(EnabledFeatures).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}