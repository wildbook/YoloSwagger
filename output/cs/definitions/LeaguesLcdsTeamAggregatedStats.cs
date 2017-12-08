using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LeaguesLcdsTeamAggregatedStats
    {
        [DataMember(Name = "queueType")]
        string QueueType { get; set; }

        [DataMember(Name = "playerAggregatedStatsList")]
        LeaguesLcdsPlayerAggregatedStats[] PlayerAggregatedStatsList { get; set; }

        [DataMember(Name = "id")]
        LeaguesLcdsTeamIdDTO Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsTeamAggregatedStats {\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  PlayerAggregatedStatsList: ").Append(PlayerAggregatedStatsList).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}