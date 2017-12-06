using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RiotMessagingServiceSession
    {
        [DataMember(Name = "state")]
        RiotMessagingServiceState State { get; set; }

        [DataMember(Name = "token")]
        string Token { get; set; }

        [DataMember(Name = "tokenType")]
        RiotMessagingServiceTokenType TokenType { get; set; }

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