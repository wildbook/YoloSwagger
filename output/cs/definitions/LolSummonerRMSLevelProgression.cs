using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSummonerRMSLevelProgression
    {
        [DataMember(Name = "finalLevelBoundary")]
        public ulong FinalLevelBoundary { get; set; }

        [DataMember(Name = "finalXp")]
        public ulong FinalXp { get; set; }

        [DataMember(Name = "initialLevelBoundary")]
        public ulong InitialLevelBoundary { get; set; }

        [DataMember(Name = "initialXp")]
        public ulong InitialXp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerRMSLevelProgression {\n");
            sb.Append("  FinalLevelBoundary: ").Append(FinalLevelBoundary).Append("\n");
            sb.Append("  FinalXp: ").Append(FinalXp).Append("\n");
            sb.Append("  InitialLevelBoundary: ").Append(InitialLevelBoundary).Append("\n");
            sb.Append("  InitialXp: ").Append(InitialXp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}