using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEsportStreamNotificationsESportsAPI_streamgroups_root
    {
        [DataMember(Name = "highlanderTournaments")]
        LolEsportStreamNotificationsEsportsAPI_highlanderTournaments[] HighlanderTournaments { get; set; }

        [DataMember(Name = "streamgroups")]
        LolEsportStreamNotificationsESportsAPI_streamgroups[] Streamgroups { get; set; }

        [DataMember(Name = "teams")]
        LolEsportStreamNotificationsEsportsAPI_teams[] Teams { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsESportsAPI_streamgroups_root {\n");
            sb.Append("  HighlanderTournaments: ").Append(HighlanderTournaments).Append("\n");
            sb.Append("  Streamgroups: ").Append(Streamgroups).Append("\n");
            sb.Append("  Teams: ").Append(Teams).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}