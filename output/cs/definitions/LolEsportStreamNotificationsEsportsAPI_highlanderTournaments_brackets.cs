using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets
    {
        [DataMember(Name = "matches")]
        Dictionary<string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches> Matches { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets {\n");
            sb.Append("  Matches: ").Append(Matches).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}