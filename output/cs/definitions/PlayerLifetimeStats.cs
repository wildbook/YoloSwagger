using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerLifetimeStats
    {
        [DataMember(Name = "playerStatSummaries")]
        PlayerStatSummaries PlayerStatSummaries { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLifetimeStats {\n");
            sb.Append("  PlayerStatSummaries: ").Append(PlayerStatSummaries).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}