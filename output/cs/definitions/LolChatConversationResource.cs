using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatConversationResource
    {
        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "inviterId")]
        public string InviterId { get; set; }

        [DataMember(Name = "isMuted")]
        public bool IsMuted { get; set; }

        [DataMember(Name = "lastMessage")]
        public LolChatConversationMessageResource? LastMessage { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "password")]
        public string Password { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "unreadMessageCount")]
        public ulong UnreadMessageCount { get; set; }

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