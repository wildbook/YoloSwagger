using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampSelectLegacyChampSelectTimer
    {
        [DataMember(Name = "adjustedTimeLeftInPhase")]
        public long AdjustedTimeLeftInPhase { get; set; }

        [DataMember(Name = "adjustedTimeLeftInPhaseInSec")]
        public int AdjustedTimeLeftInPhaseInSec { get; set; }

        [DataMember(Name = "internalNowInEpochMs")]
        public ulong InternalNowInEpochMs { get; set; }

        [DataMember(Name = "isInfinite")]
        public bool IsInfinite { get; set; }

        [DataMember(Name = "phase")]
        public string Phase { get; set; }

        [DataMember(Name = "timeLeftInPhase")]
        public long TimeLeftInPhase { get; set; }

        [DataMember(Name = "timeLeftInPhaseInSec")]
        public int TimeLeftInPhaseInSec { get; set; }

        [DataMember(Name = "totalTimeInPhase")]
        public long TotalTimeInPhase { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyChampSelectTimer {\n");
            sb.Append("  AdjustedTimeLeftInPhase: ").Append(AdjustedTimeLeftInPhase).Append("\n");
            sb.Append("  AdjustedTimeLeftInPhaseInSec: ").Append(AdjustedTimeLeftInPhaseInSec).Append("\n");
            sb.Append("  InternalNowInEpochMs: ").Append(InternalNowInEpochMs).Append("\n");
            sb.Append("  IsInfinite: ").Append(IsInfinite).Append("\n");
            sb.Append("  Phase: ").Append(Phase).Append("\n");
            sb.Append("  TimeLeftInPhase: ").Append(TimeLeftInPhase).Append("\n");
            sb.Append("  TimeLeftInPhaseInSec: ").Append(TimeLeftInPhaseInSec).Append("\n");
            sb.Append("  TotalTimeInPhase: ").Append(TotalTimeInPhase).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}