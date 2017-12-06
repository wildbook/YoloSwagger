using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLoginLoginQueue
    {
        [DataMember(Name = "approximateWaitTimeSeconds")]
        ulong? ApproximateWaitTimeSeconds { get; set; }

        [DataMember(Name = "estimatedPositionInQueue")]
        ulong EstimatedPositionInQueue { get; set; }

        [DataMember(Name = "isPositionCapped")]
        bool IsPositionCapped { get; set; }

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