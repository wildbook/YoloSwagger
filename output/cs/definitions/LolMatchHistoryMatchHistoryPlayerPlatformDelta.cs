using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryPlayerPlatformDelta
    {
        [DataMember(Name = "ipDelta")]
        ulong IpDelta { get; set; }

        [DataMember(Name = "compensationModeEnabled")]
        bool CompensationModeEnabled { get; set; }

        [DataMember(Name = "xpDelta")]
        ulong XpDelta { get; set; }

        [DataMember(Name = "timestamp")]
        ulong Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPlayerPlatformDelta {\n");
            sb.Append("  IpDelta: ").Append(IpDelta).Append("\n");
            sb.Append("  CompensationModeEnabled: ").Append(CompensationModeEnabled).Append("\n");
            sb.Append("  XpDelta: ").Append(XpDelta).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}