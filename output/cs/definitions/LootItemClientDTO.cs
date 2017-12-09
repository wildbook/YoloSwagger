using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LootItemClientDTO
    {
        [DataMember(Name = "asset")]
        public string Asset { get; set; }

        [DataMember(Name = "displayCategories")]
        public string DisplayCategories { get; set; }

        [DataMember(Name = "expiryTime")]
        public long ExpiryTime { get; set; }

        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "rarity")]
        public string Rarity { get; set; }

        [DataMember(Name = "rentalGames")]
        public int RentalGames { get; set; }

        [DataMember(Name = "rentalSeconds")]
        public long RentalSeconds { get; set; }

        [DataMember(Name = "storeItemId")]
        public int StoreItemId { get; set; }

        [DataMember(Name = "tags")]
        public string Tags { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "upgradeLootName")]
        public string UpgradeLootName { get; set; }

        [DataMember(Name = "value")]
        public int Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LootItemClientDTO {\n");
            sb.Append("  Asset: ").Append(Asset).Append("\n");
            sb.Append("  DisplayCategories: ").Append(DisplayCategories).Append("\n");
            sb.Append("  ExpiryTime: ").Append(ExpiryTime).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  Rarity: ").Append(Rarity).Append("\n");
            sb.Append("  RentalGames: ").Append(RentalGames).Append("\n");
            sb.Append("  RentalSeconds: ").Append(RentalSeconds).Append("\n");
            sb.Append("  StoreItemId: ").Append(StoreItemId).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  UpgradeLootName: ").Append(UpgradeLootName).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}