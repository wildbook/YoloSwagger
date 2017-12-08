using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatErrorResource
    {
        [DataMember(Name = "text")]
        string Text { get; set; }

        [DataMember(Name = "message")]
        string Message { get; set; }

        [DataMember(Name = "code")]
        ulong Code { get; set; }

        [DataMember(Name = "from")]
        string From { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatErrorResource {\n");
            sb.Append("  Text: ").Append(Text).Append("\n");
            sb.Append("  Message: ").Append(Message).Append("\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("  From: ").Append(From).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}