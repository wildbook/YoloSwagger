using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RosterItemDto
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "clubRole")]
        string ClubRole { get; set; }

        [DataMember(Name = "summonerIconId")]
        int SummonerIconId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterItemDto {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  ClubRole: ").Append(ClubRole).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}