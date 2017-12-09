using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolAccountVerificationVerifyRequest
    {
        [DataMember(Name = "mediator")]
        public string Mediator { get; set; }

        [DataMember(Name = "token")]
        public string Token { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolAccountVerificationVerifyRequest {\n");
            sb.Append("  Mediator: ").Append(Mediator).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}