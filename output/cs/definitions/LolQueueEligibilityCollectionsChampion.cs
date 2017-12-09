using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolQueueEligibilityCollectionsChampion
    {
        [DataMember(Name = "disabledQueues")]
        public string[] DisabledQueues { get; set; }

        [DataMember(Name = "freeToPlay")]
        public bool FreeToPlay { get; set; }

        [DataMember(Name = "ownership")]
        public LolQueueEligibilityCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "purchased")]
        public ulong Purchased { get; set; }

        [DataMember(Name = "rankedPlayEnabled")]
        public bool RankedPlayEnabled { get; set; }

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