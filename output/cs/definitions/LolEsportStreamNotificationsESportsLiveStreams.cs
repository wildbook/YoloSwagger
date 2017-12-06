using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolEsportStreamNotificationsESportsLiveStreams
    {
        [DataMember(Name = "liveStreams")]
        LolEsportStreamNotificationsESportsStreams[] LiveStreams { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEsportStreamNotificationsESportsLiveStreams {\n");
            sb.Append("  LiveStreams: ").Append(LiveStreams).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}