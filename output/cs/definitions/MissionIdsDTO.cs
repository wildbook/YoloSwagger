using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MissionIdsDTO
    {
        [DataMember(Name = "missionIds")]
        string[] MissionIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionIdsDTO {\n");
            sb.Append("  MissionIds: ").Append(MissionIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}