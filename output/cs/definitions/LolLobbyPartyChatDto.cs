using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyChatDto
    {
        [DataMember(Name = "jid")]
        public string Jid { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyChatDto {\n");
            sb.Append("  Jid: ").Append(Jid).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}