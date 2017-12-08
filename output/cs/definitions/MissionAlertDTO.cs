using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MissionAlertDTO
    {
        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "message")]
        string Message { get; set; }

        [DataMember(Name = "alertTime")]
        long AlertTime { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionAlertDTO {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  AlertTime: ").Append(AlertTime).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}