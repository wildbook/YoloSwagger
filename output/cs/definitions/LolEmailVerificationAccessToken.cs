using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolEmailVerificationAccessToken
    {
        [DataMember(Name = "expiry")]
        public ulong Expiry { get; set; }

        [DataMember(Name = "token")]
        public string Token { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolEmailVerificationAccessToken {\n");
            sb.Append("  Expiry: ").Append(Expiry).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}