using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MissionAlertDTO
    {
        [DataMember(Name = "alertTime")]
        public long AlertTime { get; set; }

        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionAlertDTO {\n");
            sb.Append("  AlertTime: ").Append(AlertTime).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}