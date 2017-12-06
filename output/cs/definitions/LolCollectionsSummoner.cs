using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsSummoner
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "profileIconId")]
        int ProfileIconId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsSummoner {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}