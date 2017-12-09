using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEsportStreamNotificationsESportsStreams
    {
        [DataMember(Name = "teamAAcronym")]
        public string TeamAAcronym { get; set; }

        [DataMember(Name = "teamAGuid")]
        public string TeamAGuid { get; set; }

        [DataMember(Name = "teamAId")]
        public long TeamAId { get; set; }

        [DataMember(Name = "teamALogoUrl")]
        public string TeamALogoUrl { get; set; }

        [DataMember(Name = "teamAName")]
        public string TeamAName { get; set; }

        [DataMember(Name = "teamBAcronym")]
        public string TeamBAcronym { get; set; }

        [DataMember(Name = "teamBGuid")]
        public string TeamBGuid { get; set; }

        [DataMember(Name = "teamBId")]
        public long TeamBId { get; set; }

        [DataMember(Name = "teamBLogoUrl")]
        public string TeamBLogoUrl { get; set; }

        [DataMember(Name = "teamBName")]
        public string TeamBName { get; set; }

        [DataMember(Name = "title")]
        public string Title { get; set; }

        [DataMember(Name = "tournamentDescription")]
        public string TournamentDescription { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsESportsStreams {\n");
            sb.Append("  TeamAAcronym: ").Append(TeamAAcronym).Append("\n");
            sb.Append("  TeamAGuid: ").Append(TeamAGuid).Append("\n");
            sb.Append("  TeamAId: ").Append(TeamAId).Append("\n");
            sb.Append("  TeamALogoUrl: ").Append(TeamALogoUrl).Append("\n");
            sb.Append("  TeamAName: ").Append(TeamAName).Append("\n");
            sb.Append("  TeamBAcronym: ").Append(TeamBAcronym).Append("\n");
            sb.Append("  TeamBGuid: ").Append(TeamBGuid).Append("\n");
            sb.Append("  TeamBId: ").Append(TeamBId).Append("\n");
            sb.Append("  TeamBLogoUrl: ").Append(TeamBLogoUrl).Append("\n");
            sb.Append("  TeamBName: ").Append(TeamBName).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  TournamentDescription: ").Append(TournamentDescription).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}