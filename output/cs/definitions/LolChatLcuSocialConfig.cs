using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatLcuSocialConfig
    {
        [DataMember(Name = "AggressiveScanning")]
        public bool AggressiveScanning { get; set; }

        [DataMember(Name = "ForceChatFilter")]
        public bool ForceChatFilter { get; set; }

        [DataMember(Name = "QueueJobGraceSeconds")]
        public ulong QueueJobGraceSeconds { get; set; }

        [DataMember(Name = "SilenceChatWhileInGame")]
        public bool SilenceChatWhileInGame { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatLcuSocialConfig {\n");
            sb.Append("  AggressiveScanning: ").Append(AggressiveScanning).Append("\n");
            sb.Append("  ForceChatFilter: ").Append(ForceChatFilter).Append("\n");
            sb.Append("  QueueJobGraceSeconds: ").Append(QueueJobGraceSeconds).Append("\n");
            sb.Append("  SilenceChatWhileInGame: ").Append(SilenceChatWhileInGame).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}