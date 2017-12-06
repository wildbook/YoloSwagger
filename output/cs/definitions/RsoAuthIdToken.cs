using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RsoAuthIdToken
    {
        [DataMember(Name = "expiry")]
        ulong Expiry { get; set; }

        [DataMember(Name = "token")]
        string Token { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthIdToken {\n");
            sb.Append("  Expiry: ").Append(Expiry).Append("\n");
            sb.Append("  Token: ").Append(Token).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}