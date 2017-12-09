using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EntitlementsToken
    {
        [DataMember(Name = "accessToken")]
        public string AccessToken { get; set; }

        [DataMember(Name = "entitlements")]
        public string[] Entitlements { get; set; }

        [DataMember(Name = "issuer")]
        public string Issuer { get; set; }

        [DataMember(Name = "subject")]
        public string Subject { get; set; }

        [DataMember(Name = "token")]
        public string Token { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EntitlementsToken {\n");
            sb.Append("  AccessToken: ").Append(AccessToken).Append("\n");
            sb.Append("  Entitlements: ").Append(Entitlements).Append("\n");
            sb.Append("  Issuer: ").Append(Issuer).Append("\n");
            sb.Append("  Subject: ").Append(Subject).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}