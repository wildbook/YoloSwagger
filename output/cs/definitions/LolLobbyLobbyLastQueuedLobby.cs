using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyLastQueuedLobby
    {
        [DataMember(Name = "canPlayAgain")]
        public bool CanPlayAgain { get; set; }

        [DataMember(Name = "members")]
        public LolLobbyLobbyLastQueuedMember[] Members { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        [DataMember(Name = "wasOwner")]
        public bool WasOwner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyLastQueuedLobby {\n");
            sb.Append("  CanPlayAgain: ").Append(CanPlayAgain).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  WasOwner: ").Append(WasOwner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}