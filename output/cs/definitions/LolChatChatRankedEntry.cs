using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChatChatRankedEntry
    {
        [DataMember(Name = "division")]
        public ulong Division { get; set; }

        [DataMember(Name = "games")]
        public ulong Games { get; set; }

        [DataMember(Name = "leagueName")]
        public string LeagueName { get; set; }

        [DataMember(Name = "rankedQueue")]
        public LolChatChatRankedQueue RankedQueue { get; set; }

        [DataMember(Name = "rankedTier")]
        public LolChatChatRankedTier RankedTier { get; set; }

        [DataMember(Name = "wins")]
        public ulong Wins { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChatChatRankedEntry {\n");
            sb.Append("  Division: ").Append(Division).Append("\n");
            sb.Append("  Games: ").Append(Games).Append("\n");
            sb.Append("  LeagueName: ").Append(LeagueName).Append("\n");
            sb.Append("  RankedQueue: ").Append(RankedQueue).Append("\n");
            sb.Append("  RankedTier: ").Append(RankedTier).Append("\n");
            sb.Append("  Wins: ").Append(Wins).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}