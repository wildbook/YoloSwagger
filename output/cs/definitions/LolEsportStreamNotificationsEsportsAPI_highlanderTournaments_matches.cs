using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "input")]
        public LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster[] Input { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Input: ").Append(Input).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}