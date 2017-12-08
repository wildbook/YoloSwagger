using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolReplaysReplaysDynamicConfig
    {
        [DataMember(Name = "MinutesUntilReplayConsideredLost")]
        double MinutesUntilReplayConsideredLost { get; set; }

        [DataMember(Name = "MinSupportedGameServerVersion")]
        string MinSupportedGameServerVersion { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplaysDynamicConfig {\n");
            sb.Append("  MinutesUntilReplayConsideredLost: ").Append(MinutesUntilReplayConsideredLost).Append("\n");
            sb.Append("  MinSupportedGameServerVersion: ").Append(MinSupportedGameServerVersion).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}