using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatChatServiceDynamicClientConfig
    {
        [DataMember(Name = "LcuSocial")]
        LolChatLcuSocialConfig? LcuSocial { get; set; }

        [DataMember(Name = "ChatDomain")]
        LolChatChatDomainConfig? ChatDomain { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatServiceDynamicClientConfig {\n");
            sb.Append("  LcuSocial: ").Append(LcuSocial).Append("\n");
            sb.Append("  ChatDomain: ").Append(ChatDomain).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}