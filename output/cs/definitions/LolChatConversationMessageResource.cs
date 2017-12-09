using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatConversationMessageResource
    {
        [DataMember(Name = "body")]
        public string Body { get; set; }

        [DataMember(Name = "fromId")]
        public ulong FromId { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "isHistorical")]
        public bool IsHistorical { get; set; }

        [DataMember(Name = "timestamp")]
        public string Timestamp { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatConversationMessageResource {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  FromId: ").Append(FromId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsHistorical: ").Append(IsHistorical).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}