using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeagueTeam
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "members")]
        public LolLeaguesLeagueTeamMember[] Members { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

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