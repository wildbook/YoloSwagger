using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChatLcuSocialConfig
    {
        [DataMember(Name = "ForceChatFilter")]
        bool ForceChatFilter { get; set; }

        [DataMember(Name = "AggressiveScanning")]
        bool AggressiveScanning { get; set; }

        [DataMember(Name = "QueueJobGraceSeconds")]
        ulong QueueJobGraceSeconds { get; set; }

        [DataMember(Name = "SilenceChatWhileInGame")]
        bool SilenceChatWhileInGame { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatLcuSocialConfig {\n");
            sb.Append("  ForceChatFilter: ").Append(ForceChatFilter).Append("\n");
            sb.Append("  AggressiveScanning: ").Append(AggressiveScanning).Append("\n");
            sb.Append("  QueueJobGraceSeconds: ").Append(QueueJobGraceSeconds).Append("\n");
            sb.Append("  SilenceChatWhileInGame: ").Append(SilenceChatWhileInGame).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}