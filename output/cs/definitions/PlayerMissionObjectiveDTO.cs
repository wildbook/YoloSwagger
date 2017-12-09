using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerMissionObjectiveDTO
    {
        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "progress")]
        public MissionProgressDTO Progress { get; set; }

        [DataMember(Name = "sequence")]
        public int Sequence { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerMissionObjectiveDTO {\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Progress: ").Append(Progress).Append("\n");
            sb.Append("  Sequence: ").Append(Sequence).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}