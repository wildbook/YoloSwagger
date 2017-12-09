using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaguesLcdsSummonerLeagueListDTO
    {
        [DataMember(Name = "entries")]
        public LeaguesLcdsLeagueItemDTO[] Entries { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "nextApexUpdate")]
        public ulong NextApexUpdate { get; set; }

        [DataMember(Name = "queue")]
        public LeaguesLcdsQueueType Queue { get; set; }

        [DataMember(Name = "requestorsName")]
        public string RequestorsName { get; set; }

        [DataMember(Name = "requestorsRank")]
        public LeaguesLcdsLeagueRank RequestorsRank { get; set; }

        [DataMember(Name = "tier")]
        public LeaguesLcdsLeagueTier Tier { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaguesLcdsSummonerLeagueListDTO {\n");
            sb.Append("  Entries: ").Append(Entries).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NextApexUpdate: ").Append(NextApexUpdate).Append("\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("  RequestorsName: ").Append(RequestorsName).Append("\n");
            sb.Append("  RequestorsRank: ").Append(RequestorsRank).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}