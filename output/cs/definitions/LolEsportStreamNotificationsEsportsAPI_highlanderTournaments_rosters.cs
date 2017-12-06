using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters
    {
        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "team")]
        long Team { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Team: ").Append(Team).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}