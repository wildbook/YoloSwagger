using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TencentQTNotification
    {
        [DataMember(Name = "data")]
        public dynamic Data { get; set; }

        [DataMember(Name = "state")]
        public string State { get; set; }

        [DataMember(Name = "timestamp")]
        public long Timestamp { get; set; }

        [DataMember(Name = "updatedBy")]
        public string UpdatedBy { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TencentQTNotification {\n");
            sb.Append("  Data: ").Append(Data).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  UpdatedBy: ").Append(UpdatedBy).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}