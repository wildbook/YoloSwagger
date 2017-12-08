using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSummonerAutoFillQueueDto
    {
        [DataMember(Name = "autoFillEligible")]
        bool AutoFillEligible { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "autoFillProtectedForStreaking")]
        bool AutoFillProtectedForStreaking { get; set; }

        [DataMember(Name = "autoFillProtectedForPromos")]
        bool AutoFillProtectedForPromos { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerAutoFillQueueDto {\n");
            sb.Append("  AutoFillEligible: ").Append(AutoFillEligible).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  AutoFillProtectedForStreaking: ").Append(AutoFillProtectedForStreaking).Append("\n");
            sb.Append("  AutoFillProtectedForPromos: ").Append(AutoFillProtectedForPromos).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}