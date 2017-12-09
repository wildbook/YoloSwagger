using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2ProfileInfo
    {
        [DataMember(Name = "checkpoint")]
        public int Checkpoint { get; set; }

        [DataMember(Name = "honorLevel")]
        public int HonorLevel { get; set; }

        [DataMember(Name = "rewardsLocked")]
        public bool RewardsLocked { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2ProfileInfo {\n");
            sb.Append("  Checkpoint: ").Append(Checkpoint).Append("\n");
            sb.Append("  HonorLevel: ").Append(HonorLevel).Append("\n");
            sb.Append("  RewardsLocked: ").Append(RewardsLocked).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}