using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyEligibilityRestriction
    {
        [DataMember(Name = "expiredTimestamp")]
        ulong ExpiredTimestamp { get; set; }

        [DataMember(Name = "restrictionArgs")]
        Dictionary<string, string> RestrictionArgs { get; set; }

        [DataMember(Name = "restrictionCode")]
        LolLobbyEligibilityRestrictionCode RestrictionCode { get; set; }

        [DataMember(Name = "summonerIds")]
        ulong[] SummonerIds { get; set; }

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