using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSummonerRMSLevelField
    {
        [DataMember(Name = "finalLevel")]
        public uint FinalLevel { get; set; }

        [DataMember(Name = "initialLevel")]
        public uint InitialLevel { get; set; }

        [DataMember(Name = "progress")]
        public LolSummonerRMSLevelProgression Progress { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerRMSLevelField {\n");
            sb.Append("  FinalLevel: ").Append(FinalLevel).Append("\n");
            sb.Append("  InitialLevel: ").Append(InitialLevel).Append("\n");
            sb.Append("  Progress: ").Append(Progress).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}