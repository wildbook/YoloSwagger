using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStorePageDTO
    {
        [DataMember(Name = "Player")]
        public LolStorePlayer Player { get; set; }

        [DataMember(Name = "catalog")]
        public LolStoreCatalogItem[] Catalog { get; set; }

        [DataMember(Name = "groupOrder")]
        public string[] GroupOrder { get; set; }

        [DataMember(Name = "itemGroups")]
        public Dictionary<string, LolStorePageGroupingDTO> ItemGroups { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStorePageDTO {\n");
            sb.Append("  Player: ").Append(Player).Append("\n");
            sb.Append("  Catalog: ").Append(Catalog).Append("\n");
            sb.Append("  GroupOrder: ").Append(GroupOrder).Append("\n");
            sb.Append("  ItemGroups: ").Append(ItemGroups).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}