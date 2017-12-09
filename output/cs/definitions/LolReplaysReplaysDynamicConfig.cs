using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysReplaysDynamicConfig
    {
        [DataMember(Name = "MinSupportedGameServerVersion")]
        public string MinSupportedGameServerVersion { get; set; }

        [DataMember(Name = "MinutesUntilReplayConsideredLost")]
        public double MinutesUntilReplayConsideredLost { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplaysDynamicConfig {\n");
            sb.Append("  MinSupportedGameServerVersion: ").Append(MinSupportedGameServerVersion).Append("\n");
            sb.Append("  MinutesUntilReplayConsideredLost: ").Append(MinutesUntilReplayConsideredLost).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}