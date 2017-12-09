using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPersonalizedOffersAuthenticationRequest
    {
        [DataMember(Name = "token")]
        public string Token { get; set; }

        [DataMember(Name = "tokenType")]
        public string TokenType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPersonalizedOffersAuthenticationRequest {\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("  TokenType: ").Append(TokenType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}