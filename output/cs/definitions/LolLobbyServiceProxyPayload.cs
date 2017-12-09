using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyServiceProxyPayload
    {
        [DataMember(Name = "body")]
        public string Body { get; set; }

        [DataMember(Name = "method")]
        public string Method { get; set; }

        [DataMember(Name = "url")]
        public string Url { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyServiceProxyPayload {\n");
            sb.Append("  Body: ").Append(Body).Append("\n");
            sb.Append("  Method: ").Append(Method).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}