using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubPlayer
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "summonerIconId")]
        public int SummonerIconId { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubPlayer {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  SummonerIconId: ").Append(SummonerIconId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}