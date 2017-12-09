using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatDebugResource
    {
        [DataMember(Name = "asyncWaitInterval")]
        public uint? AsyncWaitInterval { get; set; }

        [DataMember(Name = "enableChatFiltering")]
        public bool? EnableChatFiltering { get; set; }

        [DataMember(Name = "failAllChatLogin")]
        public bool? FailAllChatLogin { get; set; }

        [DataMember(Name = "failNextChatLogin")]
        public bool? FailNextChatLogin { get; set; }

        [DataMember(Name = "failNextChatLogout")]
        public bool? FailNextChatLogout { get; set; }

        [DataMember(Name = "failNextKeepAlive")]
        public bool? FailNextKeepAlive { get; set; }

        [DataMember(Name = "isXMPPLoggingEnabled")]
        public bool? IsXMPPLoggingEnabled { get; set; }

        [DataMember(Name = "keepAliveInterval")]
        public uint? KeepAliveInterval { get; set; }

        [DataMember(Name = "maxReconnectInterval")]
        public uint? MaxReconnectInterval { get; set; }

        [DataMember(Name = "minReconnectInterval")]
        public uint? MinReconnectInterval { get; set; }

        [DataMember(Name = "silenceChatWhileInGame")]
        public bool? SilenceChatWhileInGame { get; set; }

        [DataMember(Name = "triggerChatDisconnect")]
        public bool? TriggerChatDisconnect { get; set; }

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