using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeagueTierAndRankDTO
    {
        [DataMember(Name = "playerOrTeamId")]
        public string PlayerOrTeamId { get; set; }

        [DataMember(Name = "playerOrTeamName")]
        public string PlayerOrTeamName { get; set; }

        [DataMember(Name = "queueType")]
        public LeaguesLcdsQueueType QueueType { get; set; }

        [DataMember(Name = "rank")]
        public LeaguesLcdsLeagueRank Rank { get; set; }

        [DataMember(Name = "tier")]
        public LeaguesLcdsLeagueTier Tier { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeagueTierAndRankDTO {\n");
            sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
            sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}