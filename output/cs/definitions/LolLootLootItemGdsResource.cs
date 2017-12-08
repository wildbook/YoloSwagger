using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLootLootItemGdsResource
    {
        [DataMember(Name = "startDate")]
        string StartDate { get; set; }

        [DataMember(Name = "lifetimeMax")]
        int LifetimeMax { get; set; }

        [DataMember(Name = "endDate")]
        string EndDate { get; set; }

        [DataMember(Name = "description")]
        string Description { get; set; }

        [DataMember(Name = "mappedStoreId")]
        int MappedStoreId { get; set; }

        [DataMember(Name = "image")]
        string Image { get; set; }

        [DataMember(Name = "rarity")]
        LolLootLootRarity Rarity { get; set; }

        [DataMember(Name = "autoRedeem")]
        bool AutoRedeem { get; set; }

        [DataMember(Name = "type")]
        LolLootLootType Type { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootLootItemGdsResource {\n");
            sb.Append("  StartDate: ").Append(StartDate).Append("\n");
            sb.Append("  LifetimeMax: ").Append(LifetimeMax).Append("\n");
            sb.Append("  EndDate: ").Append(EndDate).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  MappedStoreId: ").Append(MappedStoreId).Append("\n");
            sb.Append("  Image: ").Append(Image).Append("\n");
            sb.Append("  Rarity: ").Append(Rarity).Append("\n");
            sb.Append("  AutoRedeem: ").Append(AutoRedeem).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}