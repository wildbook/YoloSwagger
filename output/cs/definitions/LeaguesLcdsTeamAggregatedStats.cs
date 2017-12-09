using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsTeamAggregatedStats
    {
        [DataMember(Name = "id")]
        public LeaguesLcdsTeamIdDTO Id { get; set; }

        [DataMember(Name = "playerAggregatedStatsList")]
        public LeaguesLcdsPlayerAggregatedStats[] PlayerAggregatedStatsList { get; set; }

        [DataMember(Name = "queueType")]
        public string QueueType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsTeamAggregatedStats {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  PlayerAggregatedStatsList: ").Append(PlayerAggregatedStatsList).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}