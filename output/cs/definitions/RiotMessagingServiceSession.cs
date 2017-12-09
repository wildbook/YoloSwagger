using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RiotMessagingServiceSession
    {
        [DataMember(Name = "state")]
        public RiotMessagingServiceState State { get; set; }

        [DataMember(Name = "token")]
        public string Token { get; set; }

        [DataMember(Name = "tokenType")]
        public RiotMessagingServiceTokenType TokenType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RiotMessagingServiceSession {\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("  TokenType: ").Append(TokenType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}