using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolFeaturedModesEligibility
    {
        [DataMember(Name = "eligible")]
        bool Eligible { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolFeaturedModesEligibility {\n");
            sb.Append("  Eligible: ").Append(Eligible).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}