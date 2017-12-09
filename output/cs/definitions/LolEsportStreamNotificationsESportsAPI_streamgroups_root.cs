using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsESportsAPI_streamgroups_root
    {
        [DataMember(Name = "highlanderTournaments")]
        public LolEsportStreamNotificationsEsportsAPI_highlanderTournaments[] HighlanderTournaments { get; set; }

        [DataMember(Name = "streamgroups")]
        public LolEsportStreamNotificationsESportsAPI_streamgroups[] Streamgroups { get; set; }

        [DataMember(Name = "teams")]
        public LolEsportStreamNotificationsEsportsAPI_teams[] Teams { get; set; }

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