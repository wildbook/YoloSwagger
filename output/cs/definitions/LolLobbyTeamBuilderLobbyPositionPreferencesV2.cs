using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyTeamBuilderLobbyPositionPreferencesV2
    {
        [DataMember(Name = "excludedPreference")]
        public string ExcludedPreference { get; set; }

        [DataMember(Name = "firstPreference")]
        public string FirstPreference { get; set; }

        [DataMember(Name = "secondPreference")]
        public string SecondPreference { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderLobbyPositionPreferencesV2 {\n");
            sb.Append("  ExcludedPreference: ").Append(ExcludedPreference).Append("\n");
            sb.Append("  FirstPreference: ").Append(FirstPreference).Append("\n");
            sb.Append("  SecondPreference: ").Append(SecondPreference).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}