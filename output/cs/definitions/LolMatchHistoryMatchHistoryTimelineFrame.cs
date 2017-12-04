using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimelineFrame {
    [DataMember(Name = "timestamp")]
    ulong Timestamp {get; set;}

    [DataMember(Name = "participantFrames")]
    Dictionary<string, LolMatchHistoryMatchHistoryParticipantFrame> ParticipantFrames {get; set;}

    [DataMember(Name = "events")]
    LolMatchHistoryMatchHistoryEvent[] Events {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolMatchHistoryMatchHistoryTimelineFrame {\n");
      sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
      sb.Append("  ParticipantFrames: ").Append(ParticipantFrames).Append("\n");
      sb.Append("  Events: ").Append(Events).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}