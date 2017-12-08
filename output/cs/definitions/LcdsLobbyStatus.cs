using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LcdsLobbyStatus
    {
        [DataMember(Name = "chatKey")]
        string ChatKey { get; set; }

        [DataMember(Name = "gameMetaData")]
        string GameMetaData { get; set; }

        [DataMember(Name = "invitationId")]
        string InvitationId { get; set; }

        [DataMember(Name = "members")]
        LcdsMember[] Members { get; set; }

        [DataMember(Name = "owner")]
        LcdsPlayer Owner { get; set; }

        [DataMember(Name = "invitees")]
        LcdsInvitee[] Invitees { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsLobbyStatus {\n");
            sb.Append("  ChatKey: ").Append(ChatKey).Append("\n");
            sb.Append("  GameMetaData: ").Append(GameMetaData).Append("\n");
            sb.Append("  InvitationId: ").Append(InvitationId).Append("\n");
            sb.Append("  Members: ").Append(Members).Append("\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  Invitees: ").Append(Invitees).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}