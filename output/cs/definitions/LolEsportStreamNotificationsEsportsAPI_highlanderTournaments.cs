using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments
    {
        [DataMember(Name = "brackets")]
        public Dictionary<string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets> Brackets { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "rosters")]
        public Dictionary<string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters> Rosters { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments {\n");
            sb.Append("  Brackets: ").Append(Brackets).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Rosters: ").Append(Rosters).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}