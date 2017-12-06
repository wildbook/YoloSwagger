using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsTeamDTO
    {
        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "roster")]
        LeaguesLcdsRosterDTO Roster { get; set; }

        [DataMember(Name = "teamId")]
        LeaguesLcdsTeamIdDTO TeamId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsTeamDTO {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Roster: ").Append(Roster).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}