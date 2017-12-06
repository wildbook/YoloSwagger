using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEsportStreamNotificationsLiveMatch
    {
        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "streamGroup")]
        string StreamGroup { get; set; }

        [DataMember(Name = "teams")]
        LolEsportStreamNotificationsLiveMatchTeam[] Teams { get; set; }

        [DataMember(Name = "title")]
        string Title { get; set; }

        [DataMember(Name = "tournamentDescription")]
        string TournamentDescription { get; set; }

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