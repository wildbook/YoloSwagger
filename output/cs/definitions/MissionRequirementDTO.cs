using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MissionRequirementDTO
    {
        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionRequirementDTO {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}