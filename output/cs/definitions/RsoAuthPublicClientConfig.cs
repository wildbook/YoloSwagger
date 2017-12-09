using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RsoAuthPublicClientConfig
    {
        [DataMember(Name = "clientId")]
        public string ClientId { get; set; }

        [DataMember(Name = "url")]
        public string Url { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RsoAuthPublicClientConfig {\n");
            sb.Append("  ClientId: ").Append(ClientId).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}