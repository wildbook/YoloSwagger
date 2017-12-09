using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MatchmakingLcdsQueueThrottled
    {
        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "reasonFailed")]
        public string ReasonFailed { get; set; }

        [DataMember(Name = "summoner")]
        public MatchmakingLcdsSummoner Summoner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsQueueThrottled {\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  ReasonFailed: ").Append(ReasonFailed).Append("\n");
            sb.Append("  Summoner: ").Append(Summoner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}