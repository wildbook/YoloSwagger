using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClubMember
    {
        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        [DataMember(Name = "since")]
        long Since { get; set; }

        [DataMember(Name = "role")]
        ClubRole Role { get; set; }

        [DataMember(Name = "summonerIconId")]
        int SummonerIconId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubMember {\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("  Since: ").Append(Since).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}