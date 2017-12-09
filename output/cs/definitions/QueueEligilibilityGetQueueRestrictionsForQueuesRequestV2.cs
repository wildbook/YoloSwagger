using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2
    {
        [DataMember(Name = "queueIds")]
        public int[] QueueIds { get; set; }

        [DataMember(Name = "queueRestrictionsToExclude")]
        public string[] QueueRestrictionsToExclude { get; set; }

        [DataMember(Name = "summonerIds")]
        public ulong[] SummonerIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2 {\n");
            sb.Append("  QueueIds: ").Append(QueueIds).Append("\n");
            sb.Append("  QueueRestrictionsToExclude: ").Append(QueueRestrictionsToExclude).Append("\n");
            sb.Append("  SummonerIds: ").Append(SummonerIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}