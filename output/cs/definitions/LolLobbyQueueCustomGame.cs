using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyQueueCustomGame
    {
        [DataMember(Name = "queueAvailability")]
        public LolLobbyQueueAvailability QueueAvailability { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyQueueCustomGame {\n");
            sb.Append("  QueueAvailability: ").Append(QueueAvailability).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}