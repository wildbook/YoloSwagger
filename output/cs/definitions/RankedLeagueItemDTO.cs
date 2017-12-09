using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RankedLeagueItemDTO
    {
        [DataMember(Name = "apexDaysUntilDecay")]
        public int ApexDaysUntilDecay { get; set; }

        [DataMember(Name = "inactive")]
        public bool Inactive { get; set; }

        [DataMember(Name = "leagueName")]
        public string LeagueName { get; set; }

        [DataMember(Name = "leaguePoints")]
        public int LeaguePoints { get; set; }

        [DataMember(Name = "loses")]
        public uint Loses { get; set; }

        [DataMember(Name = "miniSeries")]
        public RankedLeagueMiniSeriesDTO MiniSeries { get; set; }

        [DataMember(Name = "playerOrTeamId")]
        public string PlayerOrTeamId { get; set; }

        [DataMember(Name = "playerOrTeamName")]
        public string PlayerOrTeamName { get; set; }

        [DataMember(Name = "queueType")]
        public LolRankedStatsRankedQueue QueueType { get; set; }

        [DataMember(Name = "rank")]
        public RankedDivision Rank { get; set; }

        [DataMember(Name = "tier")]
        public LolRankedStatsRankedTier Tier { get; set; }

        [DataMember(Name = "wins")]
        public uint Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RankedLeagueItemDTO {\n");
            sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
            sb.Append("  Inactive: ").Append(Inactive).Append("\n");
            sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
            sb.Append("  LeaguePoints: ").Append(LeaguePoints).Append("\n");
            sb.Append("  Loses: ").Append(Loses).Append("\n");
            sb.Append("  MiniSeries: ").Append(MiniSeries).Append("\n");
            sb.Append("  PlayerOrTeamId: ").Append(PlayerOrTeamId).Append("\n");
            sb.Append("  PlayerOrTeamName: ").Append(PlayerOrTeamName).Append("\n");
            sb.Append("  QueueType: ").Append(QueueType).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}