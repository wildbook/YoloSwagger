using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolInventoryInventoryDTO
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "expires")]
        public string Expires { get; set; }

        [DataMember(Name = "items")]
        public Dictionary<string, dynamic> Items { get; set; }

        [DataMember(Name = "itemsJwt")]
        public string ItemsJwt { get; set; }

        [DataMember(Name = "puuid")]
        public string Puuid { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolInventoryInventoryDTO {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Expires: ").Append(Expires).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  ItemsJwt: ").Append(ItemsJwt).Append("\n");
            sb.Append("  Puuid: ").Append(Puuid).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}