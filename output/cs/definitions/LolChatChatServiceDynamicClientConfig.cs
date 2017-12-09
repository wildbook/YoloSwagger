using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatServiceDynamicClientConfig
    {
        [DataMember(Name = "ChatDomain")]
        public LolChatChatDomainConfig? ChatDomain { get; set; }

        [DataMember(Name = "LcuSocial")]
        public LolChatLcuSocialConfig? LcuSocial { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatServiceDynamicClientConfig {\n");
            sb.Append("  ChatDomain: ").Append(ChatDomain).Append("\n");
            sb.Append("  LcuSocial: ").Append(LcuSocial).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}