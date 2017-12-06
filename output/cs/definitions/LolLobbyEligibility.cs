using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyEligibility
    {
        [DataMember(Name = "eligible")]
        bool Eligible { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "restrictions")]
        LolLobbyEligibilityRestriction[] Restrictions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyEligibility {\n");
            sb.Append("  Eligible: ").Append(Eligible).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  Restrictions: ").Append(Restrictions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}