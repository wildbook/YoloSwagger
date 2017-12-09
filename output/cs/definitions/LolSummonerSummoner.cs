using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolSummonerSummoner
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "displayName")]
        public string DisplayName { get; set; }

        [DataMember(Name = "internalName")]
        public string InternalName { get; set; }

        [DataMember(Name = "lastSeasonHighestRank")]
        public string LastSeasonHighestRank { get; set; }

        [DataMember(Name = "percentCompleteForNextLevel")]
        public uint PercentCompleteForNextLevel { get; set; }

        [DataMember(Name = "profileIconId")]
        public int ProfileIconId { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "rerollPoints")]
        public LolSummonerSummonerRerollPoints RerollPoints { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerLevel")]
        public uint SummonerLevel { get; set; }

        [DataMember(Name = "xpSinceLastLevel")]
        public ulong XpSinceLastLevel { get; set; }

        [DataMember(Name = "xpUntilNextLevel")]
        public ulong XpUntilNextLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolSummonerSummoner {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  InternalName: ").Append(InternalName).Append("\n");
            sb.Append("  LastSeasonHighestRank: ").Append(LastSeasonHighestRank).Append("\n");
            sb.Append("  PercentCompleteForNextLevel: ").Append(PercentCompleteForNextLevel).Append("\n");
            sb.Append("  ProfileIconId: ").Append(ProfileIconId).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  RerollPoints: ").Append(RerollPoints).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("  XpSinceLastLevel: ").Append(XpSinceLastLevel).Append("\n");
            sb.Append("  XpUntilNextLevel: ").Append(XpUntilNextLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}