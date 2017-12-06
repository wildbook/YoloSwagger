using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesAchievedTier
    {
        [DataMember(Name = "division")]
        ulong Division { get; set; }

        [DataMember(Name = "queueType")]
        LolLeaguesLeagueQueueType QueueType { get; set; }

        [DataMember(Name = "tier")]
        LolLeaguesLeagueTier Tier { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesAchievedTier {\n");
            sb.Append("  Division: ").Append(Division).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}