using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolQueueEligibilityEligibilityQueryParams
    {
        [DataMember(Name = "queueIds")]
        int[] QueueIds { get; set; }

        [DataMember(Name = "summonerIds")]
        ulong[] SummonerIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityEligibilityQueryParams {\n");
            sb.Append("  QueueIds: ").Append(QueueIds).Append("\n");
            sb.Append("  SummonerIds: ").Append(SummonerIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}