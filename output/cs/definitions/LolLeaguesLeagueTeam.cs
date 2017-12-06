using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeagueTeam
    {
        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "members")]
        LolLeaguesLeagueTeamMember[] Members { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueTeam {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}