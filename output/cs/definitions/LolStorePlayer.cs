using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStorePlayer
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "ip")]
        public long Ip { get; set; }

        [DataMember(Name = "rp")]
        public long Rp { get; set; }

        [DataMember(Name = "summonerLevel")]
        public uint SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStorePlayer {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Ip: ").Append(Ip).Append("\n");
            sb.Append("  Rp: ").Append(Rp).Append("\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}