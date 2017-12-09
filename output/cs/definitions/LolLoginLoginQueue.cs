using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLoginLoginQueue
    {
        [DataMember(Name = "approximateWaitTimeSeconds")]
        public ulong? ApproximateWaitTimeSeconds { get; set; }

        [DataMember(Name = "estimatedPositionInQueue")]
        public ulong EstimatedPositionInQueue { get; set; }

        [DataMember(Name = "isPositionCapped")]
        public bool IsPositionCapped { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLoginLoginQueue {\n");
            sb.Append("  ApproximateWaitTimeSeconds: ").Append(ApproximateWaitTimeSeconds).Append("\n");
            sb.Append("  EstimatedPositionInQueue: ").Append(EstimatedPositionInQueue).Append("\n");
            sb.Append("  IsPositionCapped: ").Append(IsPositionCapped).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}