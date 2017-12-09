using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryTimelineFrames
    {
        [DataMember(Name = "frames")]
        public LolMatchHistoryMatchHistoryTimelineFrame[] Frames { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryTimelineFrames {\n");
            sb.Append("  Frames: ").Append(Frames).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}