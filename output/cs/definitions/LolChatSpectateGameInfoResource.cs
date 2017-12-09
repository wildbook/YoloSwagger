using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatSpectateGameInfoResource
    {
        [DataMember(Name = "allowObserveMode")]
        public string AllowObserveMode { get; set; }

        [DataMember(Name = "dropInSpectateGameId")]
        public string DropInSpectateGameId { get; set; }

        [DataMember(Name = "gameQueueType")]
        public string GameQueueType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatSpectateGameInfoResource {\n");
            sb.Append("  AllowObserveMode: ").Append(AllowObserveMode).Append("\n");
            sb.Append("  DropInSpectateGameId: ").Append(DropInSpectateGameId).Append("\n");
            sb.Append("  GameQueueType: ").Append(GameQueueType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}