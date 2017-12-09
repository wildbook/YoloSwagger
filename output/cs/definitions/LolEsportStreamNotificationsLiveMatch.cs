using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsLiveMatch
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "streamGroup")]
        public string StreamGroup { get; set; }

        [DataMember(Name = "teams")]
        public LolEsportStreamNotificationsLiveMatchTeam[] Teams { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        [DataMember(Name = "tournamentDescription")]
        public string TournamentDescription { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsLiveMatch {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  StreamGroup: ").Append(StreamGroup).Append("\n");
            sb.Append("  Teams: ").Append(Teams).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  TournamentDescription: ").Append(TournamentDescription).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}