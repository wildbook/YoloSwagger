using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolClashEntitlementsToken
    {
        [DataMember(Name = "accessToken")]
        string AccessToken { get; set; }

        [DataMember(Name = "entitlements")]
        string[] Entitlements { get; set; }

        [DataMember(Name = "token")]
        string Token { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashEntitlementsToken {\n");
            sb.Append("  AccessToken: ").Append(AccessToken).Append("\n");
            sb.Append("  Entitlements: ").Append(Entitlements).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}