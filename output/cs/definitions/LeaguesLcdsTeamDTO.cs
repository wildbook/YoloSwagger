using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsTeamDTO
    {
        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "roster")]
        public LeaguesLcdsRosterDTO Roster { get; set; }

        [DataMember(Name = "teamId")]
        public LeaguesLcdsTeamIdDTO TeamId { get; set; }

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