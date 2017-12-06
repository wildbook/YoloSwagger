using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolQueueEligibilityCollectionsChampion
    {
        [DataMember(Name = "disabledQueues")]
        string[] DisabledQueues { get; set; }

        [DataMember(Name = "freeToPlay")]
        bool FreeToPlay { get; set; }

        [DataMember(Name = "ownership")]
        LolQueueEligibilityCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "purchased")]
        ulong Purchased { get; set; }

        [DataMember(Name = "rankedPlayEnabled")]
        bool RankedPlayEnabled { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityCollectionsChampion {\n");
            sb.Append("  DisabledQueues: ").Append(DisabledQueues).Append("\n");
            sb.Append("  FreeToPlay: ").Append(FreeToPlay).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  Purchased: ").Append(Purchased).Append("\n");
            sb.Append("  RankedPlayEnabled: ").Append(RankedPlayEnabled).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}