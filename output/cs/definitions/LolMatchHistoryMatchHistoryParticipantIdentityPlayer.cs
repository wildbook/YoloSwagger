using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "currentAccountId")]
        public ulong CurrentAccountId { get; set; }

        [DataMember(Name = "currentPlatformId")]
        public string CurrentPlatformId { get; set; }

        [DataMember(Name = "matchHistoryUri")]
        public string MatchHistoryUri { get; set; }

        [DataMember(Name = "platformId")]
        public string PlatformId { get; set; }

        [DataMember(Name = "profileIcon")]
        public int ProfileIcon { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

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