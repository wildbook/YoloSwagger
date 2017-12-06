using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolHonorV2VendedHonorState
    {
        [DataMember(Name = "checkpoint")]
        int Checkpoint { get; set; }

        [DataMember(Name = "level")]
        int Level { get; set; }

        [DataMember(Name = "rewardsLocked")]
        bool RewardsLocked { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2VendedHonorState {\n");
            sb.Append("  Checkpoint: ").Append(Checkpoint).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  RewardsLocked: ").Append(RewardsLocked).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}