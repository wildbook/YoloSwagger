using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster
    {
        [DataMember(Name = "roster")]
        public string Roster { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster {\n");
            sb.Append("  Roster: ").Append(Roster).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}