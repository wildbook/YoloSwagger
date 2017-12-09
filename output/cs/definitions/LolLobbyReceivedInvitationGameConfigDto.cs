using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyReceivedInvitationGameConfigDto
    {
        [DataMember(Name = "gameMode")]
        public string GameMode { get; set; }

        [DataMember(Name = "gameMutator")]
        public string GameMutator { get; set; }

        [DataMember(Name = "inviteGameType")]
        public string InviteGameType { get; set; }

        [DataMember(Name = "mapId")]
        public int MapId { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyReceivedInvitationGameConfigDto {\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameMutator: ").Append(GameMutator).Append("\n");
            sb.Append("  InviteGameType: ").Append(InviteGameType).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}