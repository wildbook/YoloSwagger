using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "currentAccountId")]
        ulong CurrentAccountId { get; set; }

        [DataMember(Name = "currentPlatformId")]
        string CurrentPlatformId { get; set; }

        [DataMember(Name = "matchHistoryUri")]
        string MatchHistoryUri { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "profileIcon")]
        int ProfileIcon { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryParticipantIdentityPlayer {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  CurrentAccountId: ").Append(CurrentAccountId).Append("\n");
            sb.Append("  CurrentPlatformId: ").Append(CurrentPlatformId).Append("\n");
            sb.Append("  MatchHistoryUri: ").Append(MatchHistoryUri).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  ProfileIcon: ").Append(ProfileIcon).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}