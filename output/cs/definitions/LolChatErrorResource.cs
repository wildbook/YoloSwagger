using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatErrorResource
    {
        [DataMember(Name = "code")]
        public ulong Code { get; set; }

        [DataMember(Name = "from")]
        public string From { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "message")]
        public string Message { get; set; }

        [DataMember(Name = "text")]
        public string Text { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatErrorResource {\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("  From: ").Append(From).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}