using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsTeamIdDTO
    {
        [DataMember(Name = "fullId")]
        string FullId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsTeamIdDTO {\n");
            sb.Append("  FullId: ").Append(FullId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}