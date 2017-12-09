using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootLootItemGdsResource
    {
        [DataMember(Name = "autoRedeem")]
        public bool AutoRedeem { get; set; }

        [DataMember(Name = "description")]
        public string Description { get; set; }

        [DataMember(Name = "endDate")]
        public string EndDate { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "image")]
        public string Image { get; set; }

        [DataMember(Name = "lifetimeMax")]
        public int LifetimeMax { get; set; }

        [DataMember(Name = "mappedStoreId")]
        public int MappedStoreId { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "rarity")]
        public LolLootLootRarity Rarity { get; set; }

        [DataMember(Name = "startDate")]
        public string StartDate { get; set; }

        [DataMember(Name = "type")]
        public LolLootLootType Type { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootItemGdsResource {\n");
            sb.Append("  AutoRedeem: ").Append(AutoRedeem).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Image: ").Append(Image).Append("\n");
            sb.Append("  LifetimeMax: ").Append(LifetimeMax).Append("\n");
            sb.Append("  MappedStoreId: ").Append(MappedStoreId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Rarity: ").Append(Rarity).Append("\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}