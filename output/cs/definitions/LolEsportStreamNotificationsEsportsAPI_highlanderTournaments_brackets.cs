using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "matches")]
        public Dictionary<string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches> Matches { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Matches: ").Append(Matches).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}