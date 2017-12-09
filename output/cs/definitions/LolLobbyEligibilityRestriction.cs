using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyEligibilityRestriction
    {
        [DataMember(Name = "expiredTimestamp")]
        public ulong ExpiredTimestamp { get; set; }

        [DataMember(Name = "restrictionArgs")]
        public Dictionary<string, string> RestrictionArgs { get; set; }

        [DataMember(Name = "restrictionCode")]
        public LolLobbyEligibilityRestrictionCode RestrictionCode { get; set; }

        [DataMember(Name = "summonerIds")]
        public ulong[] SummonerIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyEligibilityRestriction {\n");
            sb.Append("  ExpiredTimestamp: ").Append(ExpiredTimestamp).Append("\n");
            sb.Append("  RestrictionArgs: ").Append(RestrictionArgs).Append("\n");
            sb.Append("  RestrictionCode: ").Append(RestrictionCode).Append("\n");
            sb.Append("  SummonerIds: ").Append(SummonerIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}