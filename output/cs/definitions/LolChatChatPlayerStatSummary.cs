using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatPlayerStatSummary
    {
        [DataMember(Name = "leaves")]
        public ulong Leaves { get; set; }

        [DataMember(Name = "losses")]
        public ulong Losses { get; set; }

        [DataMember(Name = "maxRating")]
        public ulong MaxRating { get; set; }

        [DataMember(Name = "playerStatSummaryType")]
        public string PlayerStatSummaryType { get; set; }

        [DataMember(Name = "rating")]
        public ulong Rating { get; set; }

        [DataMember(Name = "wins")]
        public ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatPlayerStatSummary {\n");
            sb.Append("  Leaves: ").Append(Leaves).Append("\n");
            sb.Append("  Losses: ").Append(Losses).Append("\n");
            sb.Append("  MaxRating: ").Append(MaxRating).Append("\n");
            sb.Append("  PlayerStatSummaryType: ").Append(PlayerStatSummaryType).Append("\n");
            sb.Append("  Rating: ").Append(Rating).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}