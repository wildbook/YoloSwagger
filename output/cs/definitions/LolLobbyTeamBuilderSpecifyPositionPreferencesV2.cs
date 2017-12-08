using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2
    {
        [DataMember(Name = "secondPreference")]
        string SecondPreference { get; set; }

        [DataMember(Name = "firstPreference")]
        string FirstPreference { get; set; }

        [DataMember(Name = "excludedPreference")]
        string ExcludedPreference { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderSpecifyPositionPreferencesV2 {\n");
            sb.Append("  SecondPreference: ").Append(SecondPreference).Append("\n");
            sb.Append("  FirstPreference: ").Append(FirstPreference).Append("\n");
            sb.Append("  ExcludedPreference: ").Append(ExcludedPreference).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}