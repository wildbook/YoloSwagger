using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolSummonerSummoner
    {
        [DataMember(Name = "percentCompleteForNextLevel")]
        uint PercentCompleteForNextLevel { get; set; }

        [DataMember(Name = "profileIconId")]
        int ProfileIconId { get; set; }

        [DataMember(Name = "rerollPoints")]
        LolSummonerSummonerRerollPoints RerollPoints { get; set; }

        [DataMember(Name = "displayName")]
        string DisplayName { get; set; }

        [DataMember(Name = "xpSinceLastLevel")]
        ulong XpSinceLastLevel { get; set; }

        [DataMember(Name = "internalName")]
        string InternalName { get; set; }

        [DataMember(Name = "lastSeasonHighestRank")]
        string LastSeasonHighestRank { get; set; }

        [DataMember(Name = "xpUntilNextLevel")]
        ulong XpUntilNextLevel { get; set; }

        [DataMember(Name = "puuid")]
        string Puuid { get; set; }

        [DataMember(Name = "summonerLevel")]
        uint SummonerLevel { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerSummoner {\n");
            sb.Append("  PercentCompleteForNextLevel: ").Append(PercentCompleteForNextLevel).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  RerollPoints: ").Append(RerollPoints).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  XpSinceLastLevel: ").Append(XpSinceLastLevel).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  LastSeasonHighestRank: ").Append(LastSeasonHighestRank).Append("\n");
            sb.Append("  XpUntilNextLevel: ").Append(XpUntilNextLevel).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}