using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct QueueEligilibilityGatekeeperRestrictionDtoV3
    {
        [DataMember(Name = "payload")]
        public string Payload { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "reason")]
        public string Reason { get; set; }

        [DataMember(Name = "remainingMillis")]
        public long RemainingMillis { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueueEligilibilityGatekeeperRestrictionDtoV3 {\n");
            sb.Append("  Payload: ").Append(Payload).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("  RemainingMillis: ").Append(RemainingMillis).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}