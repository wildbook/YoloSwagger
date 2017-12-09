using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashRosterMember
    {
        [DataMember(Name = "biddingData")]
        public LolClashBiddingData BiddingData { get; set; }

        [DataMember(Name = "isSubbedOut")]
        public bool IsSubbedOut { get; set; }

        [DataMember(Name = "isSubstitute")]
        public bool IsSubstitute { get; set; }

        [DataMember(Name = "position")]
        public Position Position { get; set; }

        [DataMember(Name = "replacedSummonerId")]
        public ulong ReplacedSummonerId { get; set; }

        [DataMember(Name = "state")]
        public LolClashRosterMemberState State { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashRosterMember {\n");
            sb.Append("  BiddingData: ").Append(BiddingData).Append("\n");
            sb.Append("  IsSubbedOut: ").Append(IsSubbedOut).Append("\n");
            sb.Append("  IsSubstitute: ").Append(IsSubstitute).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  ReplacedSummonerId: ").Append(ReplacedSummonerId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}