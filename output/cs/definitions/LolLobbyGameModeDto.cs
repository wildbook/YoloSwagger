using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyGameModeDto
    {
        [DataMember(Name = "botDifficulty")]
        public string BotDifficulty { get; set; }

        [DataMember(Name = "gameType")]
        public string GameType { get; set; }

        [DataMember(Name = "maxPartySize")]
        public int MaxPartySize { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyGameModeDto {\n");
            sb.Append("  BotDifficulty: ").Append(BotDifficulty).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  MaxPartySize: ").Append(MaxPartySize).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}