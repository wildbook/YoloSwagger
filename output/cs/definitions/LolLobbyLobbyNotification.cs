using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyLobbyNotification
    {
        [DataMember(Name = "notificationId")]
        public string NotificationId { get; set; }

        [DataMember(Name = "notificationReason")]
        public string NotificationReason { get; set; }

        [DataMember(Name = "summonerIds")]
        public ulong[] SummonerIds { get; set; }

        [DataMember(Name = "timestamp")]
        public ulong Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLobbyNotification {\n");
            sb.Append("  NotificationId: ").Append(NotificationId).Append("\n");
            sb.Append("  NotificationReason: ").Append(NotificationReason).Append("\n");
            sb.Append("  SummonerIds: ").Append(SummonerIds).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}