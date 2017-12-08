using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootGameDataSummonerEmote
    {
        [DataMember(Name = "inventoryIcon")]
        string InventoryIcon { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootGameDataSummonerEmote {\n");
            sb.Append("  InventoryIcon: ").Append(InventoryIcon).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}