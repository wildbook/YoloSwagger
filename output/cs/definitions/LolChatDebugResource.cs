using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatDebugResource
    {
        [DataMember(Name = "asyncWaitInterval")]
        uint? AsyncWaitInterval { get; set; }

        [DataMember(Name = "enableChatFiltering")]
        bool? EnableChatFiltering { get; set; }

        [DataMember(Name = "failAllChatLogin")]
        bool? FailAllChatLogin { get; set; }

        [DataMember(Name = "failNextChatLogin")]
        bool? FailNextChatLogin { get; set; }

        [DataMember(Name = "failNextChatLogout")]
        bool? FailNextChatLogout { get; set; }

        [DataMember(Name = "failNextKeepAlive")]
        bool? FailNextKeepAlive { get; set; }

        [DataMember(Name = "isXMPPLoggingEnabled")]
        bool? IsXMPPLoggingEnabled { get; set; }

        [DataMember(Name = "keepAliveInterval")]
        uint? KeepAliveInterval { get; set; }

        [DataMember(Name = "maxReconnectInterval")]
        uint? MaxReconnectInterval { get; set; }

        [DataMember(Name = "minReconnectInterval")]
        uint? MinReconnectInterval { get; set; }

        [DataMember(Name = "silenceChatWhileInGame")]
        bool? SilenceChatWhileInGame { get; set; }

        [DataMember(Name = "triggerChatDisconnect")]
        bool? TriggerChatDisconnect { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatDebugResource {\n");
            sb.Append("  AsyncWaitInterval: ").Append(AsyncWaitInterval).Append("\n");
            sb.Append("  EnableChatFiltering: ").Append(EnableChatFiltering).Append("\n");
            sb.Append("  FailAllChatLogin: ").Append(FailAllChatLogin).Append("\n");
            sb.Append("  FailNextChatLogin: ").Append(FailNextChatLogin).Append("\n");
            sb.Append("  FailNextChatLogout: ").Append(FailNextChatLogout).Append("\n");
            sb.Append("  FailNextKeepAlive: ").Append(FailNextKeepAlive).Append("\n");
            sb.Append("  IsXMPPLoggingEnabled: ").Append(IsXMPPLoggingEnabled).Append("\n");
            sb.Append("  KeepAliveInterval: ").Append(KeepAliveInterval).Append("\n");
            sb.Append("  MaxReconnectInterval: ").Append(MaxReconnectInterval).Append("\n");
            sb.Append("  MinReconnectInterval: ").Append(MinReconnectInterval).Append("\n");
            sb.Append("  SilenceChatWhileInGame: ").Append(SilenceChatWhileInGame).Append("\n");
            sb.Append("  TriggerChatDisconnect: ").Append(TriggerChatDisconnect).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}