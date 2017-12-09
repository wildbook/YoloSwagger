using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyNotificationEnvelopeDto
    {
        [DataMember(Name = "player")]
        public LolLobbyPlayerDto? Player { get; set; }

        [DataMember(Name = "queueRestriction")]
        public LolLobbyQueueRestrictionDto? QueueRestriction { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyNotificationEnvelopeDto {\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  QueueRestriction: ").Append(QueueRestriction).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}