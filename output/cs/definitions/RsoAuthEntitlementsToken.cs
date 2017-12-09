using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RsoAuthEntitlementsToken
    {
        [DataMember(Name = "entitlements")]
        public string[] Entitlements { get; set; }

        [DataMember(Name = "expiry")]
        public ulong Expiry { get; set; }

        [DataMember(Name = "token")]
        public string Token { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthEntitlementsToken {\n");
            sb.Append("  Entitlements: ").Append(Entitlements).Append("\n");
            sb.Append("  Expiry: ").Append(Expiry).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}