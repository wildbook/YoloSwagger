using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubMember
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "role")]
        public ClubRole Role { get; set; }

        [DataMember(Name = "since")]
        public long Since { get; set; }

        [DataMember(Name = "summonerIconId")]
        public int SummonerIconId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubMember {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Since: ").Append(Since).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}