using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyChangeQueue
    {
        [DataMember(Name = "customGameLobby")]
        public LolLobbyLobbyCustomGameLobby? CustomGameLobby { get; set; }

        [DataMember(Name = "isCustom")]
        public bool IsCustom { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyChangeQueue {\n");
            sb.Append("  CustomGameLobby: ").Append(CustomGameLobby).Append("\n");
            sb.Append("  IsCustom: ").Append(IsCustom).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}