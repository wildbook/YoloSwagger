using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryTimelineFrame
    {
        [DataMember(Name = "events")]
        public LolMatchHistoryMatchHistoryEvent[] Events { get; set; }

        [DataMember(Name = "participantFrames")]
        public Dictionary<string, LolMatchHistoryMatchHistoryParticipantFrame> ParticipantFrames { get; set; }

        [DataMember(Name = "timestamp")]
        public ulong Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryTimelineFrame {\n");
            sb.Append("  Events: ").Append(Events).Append("\n");
            sb.Append("  ParticipantFrames: ").Append(ParticipantFrames).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}