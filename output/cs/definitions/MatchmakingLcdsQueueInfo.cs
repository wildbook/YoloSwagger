using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MatchmakingLcdsQueueInfo
    {
        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "waitTime")]
        public ulong WaitTime { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsQueueInfo {\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  WaitTime: ").Append(WaitTime).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}