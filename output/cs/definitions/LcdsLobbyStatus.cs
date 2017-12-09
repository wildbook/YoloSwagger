using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsLobbyStatus
    {
        [DataMember(Name = "chatKey")]
        public string ChatKey { get; set; }

        [DataMember(Name = "gameMetaData")]
        public string GameMetaData { get; set; }

        [DataMember(Name = "invitationId")]
        public string InvitationId { get; set; }

        [DataMember(Name = "invitees")]
        public LcdsInvitee[] Invitees { get; set; }

        [DataMember(Name = "members")]
        public LcdsMember[] Members { get; set; }

        [DataMember(Name = "owner")]
        public LcdsPlayer Owner { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsLobbyStatus {\n");
            sb.Append("  ChatKey: ").Append(ChatKey).Append("\n");
            sb.Append("  GameMetaData: ").Append(GameMetaData).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  Invitees: ").Append(Invitees).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}