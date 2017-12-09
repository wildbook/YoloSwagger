using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyPositionPreferences
    {
        [DataMember(Name = "firstPreference")]
        public string FirstPreference { get; set; }

        [DataMember(Name = "secondPreference")]
        public string SecondPreference { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyPositionPreferences {\n");
            sb.Append("  FirstPreference: ").Append(FirstPreference).Append("\n");
            sb.Append("  SecondPreference: ").Append(SecondPreference).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}