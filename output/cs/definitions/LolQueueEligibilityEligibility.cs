using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolQueueEligibilityEligibility
    {
        [DataMember(Name = "eligible")]
        public bool Eligible { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "restrictions")]
        public LolQueueEligibilityEligibilityRestriction[] Restrictions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityEligibility {\n");
            sb.Append("  Eligible: ").Append(Eligible).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  Restrictions: ").Append(Restrictions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}