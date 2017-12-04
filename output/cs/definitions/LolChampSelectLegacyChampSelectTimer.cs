using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolChampSelectLegacyChampSelectTimer {
    [DataMember(Name = "isInfinite")]
    bool IsInfinite {get; set;}

    [DataMember(Name = "totalTimeInPhase")]
    long TotalTimeInPhase {get; set;}

    [DataMember(Name = "timeLeftInPhaseInSec")]
    int TimeLeftInPhaseInSec {get; set;}

    [DataMember(Name = "adjustedTimeLeftInPhase")]
    long AdjustedTimeLeftInPhase {get; set;}

    [DataMember(Name = "internalNowInEpochMs")]
    ulong InternalNowInEpochMs {get; set;}

    [DataMember(Name = "phase")]
    string Phase {get; set;}

    [DataMember(Name = "adjustedTimeLeftInPhaseInSec")]
    int AdjustedTimeLeftInPhaseInSec {get; set;}

    [DataMember(Name = "timeLeftInPhase")]
    long TimeLeftInPhase {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolChampSelectLegacyChampSelectTimer {\n");
      sb.Append("  IsInfinite: ").Append(IsInfinite).Append("\n");
      sb.Append("  TotalTimeInPhase: ").Append(TotalTimeInPhase).Append("\n");
      sb.Append("  TimeLeftInPhaseInSec: ").Append(TimeLeftInPhaseInSec).Append("\n");
      sb.Append("  AdjustedTimeLeftInPhase: ").Append(AdjustedTimeLeftInPhase).Append("\n");
      sb.Append("  InternalNowInEpochMs: ").Append(InternalNowInEpochMs).Append("\n");
      sb.Append("  Phase: ").Append(Phase).Append("\n");
      sb.Append("  AdjustedTimeLeftInPhaseInSec: ").Append(AdjustedTimeLeftInPhaseInSec).Append("\n");
      sb.Append("  TimeLeftInPhase: ").Append(TimeLeftInPhase).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}