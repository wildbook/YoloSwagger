using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolRankedStatsRankedEntry
    {
        [DataMember(Name = "division")]
        ulong Division { get; set; }

        [DataMember(Name = "apexDaysUntilDecay")]
        long ApexDaysUntilDecay { get; set; }

        [DataMember(Name = "isApexTier")]
        bool IsApexTier { get; set; }

        [DataMember(Name = "rankedTier")]
        LolRankedStatsRankedTier RankedTier { get; set; }

        [DataMember(Name = "games")]
        ulong Games { get; set; }

        [DataMember(Name = "lp")]
        long Lp { get; set; }

        [DataMember(Name = "wins")]
        ulong Wins { get; set; }

        [DataMember(Name = "leagueName")]
        string LeagueName { get; set; }

        [DataMember(Name = "rankedQueue")]
        LolRankedStatsRankedQueue RankedQueue { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolRankedStatsRankedEntry {\n");
            sb.Append("  Division: ").Append(Division).Append("\n");
            sb.Append("  ApexDaysUntilDecay: ").Append(ApexDaysUntilDecay).Append("\n");
            sb.Append("  IsApexTier: ").Append(IsApexTier).Append("\n");
            sb.Append("  RankedTier: ").Append(RankedTier).Append("\n");
            sb.Append("  Games: ").Append(Games).Append("\n");
            sb.Append("  Lp: ").Append(Lp).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
            sb.Append("  RankedQueue: ").Append(RankedQueue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}