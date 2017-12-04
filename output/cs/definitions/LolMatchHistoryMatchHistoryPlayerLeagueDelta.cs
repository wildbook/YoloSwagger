using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryPlayerLeagueDelta {
    [DataMember(Name = "miniSeriesProgress")]
    string[] MiniSeriesProgress {get; set;}

    [DataMember(Name = "reason")]
    string Reason {get; set;}

    [DataMember(Name = "timestamp")]
    ulong Timestamp {get; set;}

    [DataMember(Name = "leaguePointDelta")]
    ulong LeaguePointDelta {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryPlayerLeagueDelta {\n");
      sb.Append("  MiniSeriesProgress: ").Append(MiniSeriesProgress).Append("\n");
      sb.Append("  Reason: ").Append(Reason).Append("\n");
      sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
      sb.Append("  LeaguePointDelta: ").Append(LeaguePointDelta).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}