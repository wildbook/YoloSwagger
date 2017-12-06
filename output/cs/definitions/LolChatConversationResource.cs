using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatConversationResource
    {
        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "inviterId")]
        string InviterId { get; set; }

        [DataMember(Name = "isMuted")]
        bool IsMuted { get; set; }

        [DataMember(Name = "lastMessage")]
        LolChatConversationMessageResource? LastMessage { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "password")]
        string Password { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "unreadMessageCount")]
        ulong UnreadMessageCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatConversationResource {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InviterId: ").Append(InviterId).Append("\n");
            sb.Append("  IsMuted: ").Append(IsMuted).Append("\n");
            sb.Append("  LastMessage: ").Append(LastMessage).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  UnreadMessageCount: ").Append(UnreadMessageCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}