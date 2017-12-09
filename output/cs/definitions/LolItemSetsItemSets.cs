using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolItemSetsItemSets
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "itemSets")]
        public LolItemSetsItemSet[] ItemSets { get; set; }

        [DataMember(Name = "timestamp")]
        public ulong Timestamp { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolItemSetsItemSets {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  ItemSets: ").Append(ItemSets).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}