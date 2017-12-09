using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootPlayerLoot
    {
        [DataMember(Name = "asset")]
        public string Asset { get; set; }

        [DataMember(Name = "count")]
        public int Count { get; set; }

        [DataMember(Name = "disenchantLootName")]
        public string DisenchantLootName { get; set; }

        [DataMember(Name = "disenchantValue")]
        public int DisenchantValue { get; set; }

        [DataMember(Name = "displayCategories")]
        public string DisplayCategories { get; set; }

        [DataMember(Name = "expiryTime")]
        public long ExpiryTime { get; set; }

        [DataMember(Name = "isNew")]
        public bool IsNew { get; set; }

        [DataMember(Name = "isRental")]
        public bool IsRental { get; set; }

        [DataMember(Name = "itemDesc")]
        public string ItemDesc { get; set; }

        [DataMember(Name = "itemStatus")]
        public LolLootItemOwnershipStatus ItemStatus { get; set; }

        [DataMember(Name = "localizedDescription")]
        public string LocalizedDescription { get; set; }

        [DataMember(Name = "localizedName")]
        public string LocalizedName { get; set; }

        [DataMember(Name = "lootId")]
        public string LootId { get; set; }

        [DataMember(Name = "lootName")]
        public string LootName { get; set; }

        [DataMember(Name = "parentItemStatus")]
        public LolLootItemOwnershipStatus ParentItemStatus { get; set; }

        [DataMember(Name = "parentStoreItemId")]
        public int ParentStoreItemId { get; set; }

        [DataMember(Name = "rarity")]
        public string Rarity { get; set; }

        [DataMember(Name = "redeemableStatus")]
        public LolLootRedeemableStatus RedeemableStatus { get; set; }

        [DataMember(Name = "refId")]
        public string RefId { get; set; }

        [DataMember(Name = "rentalGames")]
        public int RentalGames { get; set; }

        [DataMember(Name = "rentalSeconds")]
        public long RentalSeconds { get; set; }

        [DataMember(Name = "shadowPath")]
        public string ShadowPath { get; set; }

        [DataMember(Name = "splashPath")]
        public string SplashPath { get; set; }

        [DataMember(Name = "storeItemId")]
        public int StoreItemId { get; set; }

        [DataMember(Name = "tags")]
        public string Tags { get; set; }

        [DataMember(Name = "tilePath")]
        public string TilePath { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "upgradeLootName")]
        public string UpgradeLootName { get; set; }

        [DataMember(Name = "value")]
        public int Value { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootPlayerLoot {\n");
            sb.Append("  Asset: ").Append(Asset).Append("\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  DisenchantLootName: ").Append(DisenchantLootName).Append("\n");
            sb.Append("  DisenchantValue: ").Append(DisenchantValue).Append("\n");
            sb.Append("  DisplayCategories: ").Append(DisplayCategories).Append("\n");
            sb.Append("  ExpiryTime: ").Append(ExpiryTime).Append("\n");
            sb.Append("  IsNew: ").Append(IsNew).Append("\n");
            sb.Append("  IsRental: ").Append(IsRental).Append("\n");
            sb.Append("  ItemDesc: ").Append(ItemDesc).Append("\n");
            sb.Append("  ItemStatus: ").Append(ItemStatus).Append("\n");
            sb.Append("  LocalizedDescription: ").Append(LocalizedDescription).Append("\n");
            sb.Append("  LocalizedName: ").Append(LocalizedName).Append("\n");
            sb.Append("  LootId: ").Append(LootId).Append("\n");
            sb.Append("  LootName: ").Append(LootName).Append("\n");
            sb.Append("  ParentItemStatus: ").Append(ParentItemStatus).Append("\n");
            sb.Append("  ParentStoreItemId: ").Append(ParentStoreItemId).Append("\n");
            sb.Append("  Rarity: ").Append(Rarity).Append("\n");
            sb.Append("  RedeemableStatus: ").Append(RedeemableStatus).Append("\n");
            sb.Append("  RefId: ").Append(RefId).Append("\n");
            sb.Append("  RentalGames: ").Append(RentalGames).Append("\n");
            sb.Append("  RentalSeconds: ").Append(RentalSeconds).Append("\n");
            sb.Append("  ShadowPath: ").Append(ShadowPath).Append("\n");
            sb.Append("  SplashPath: ").Append(SplashPath).Append("\n");
            sb.Append("  StoreItemId: ").Append(StoreItemId).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  TilePath: ").Append(TilePath).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  UpgradeLootName: ").Append(UpgradeLootName).Append("\n");
            sb.Append("  Value: ").Append(Value).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}