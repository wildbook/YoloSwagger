using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LootItemClientDTO {
    [DataMember(Name = "lootName")]
    string LootName {get; set;}

    [DataMember(Name = "rentalSeconds")]
    long RentalSeconds {get; set;}

    [DataMember(Name = "tags")]
    string Tags {get; set;}

    [DataMember(Name = "upgradeLootName")]
    string UpgradeLootName {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    [DataMember(Name = "expiryTime")]
    long ExpiryTime {get; set;}

    [DataMember(Name = "value")]
    int Value {get; set;}

    [DataMember(Name = "rarity")]
    string Rarity {get; set;}

    [DataMember(Name = "asset")]
    string Asset {get; set;}

    [DataMember(Name = "storeItemId")]
    int StoreItemId {get; set;}

    [DataMember(Name = "displayCategories")]
    string DisplayCategories {get; set;}

    [DataMember(Name = "rentalGames")]
    int RentalGames {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LootItemClientDTO {\n");
      sb.Append("  LootName: ").Append(LootName).Append("\n");
      sb.Append("  RentalSeconds: ").Append(RentalSeconds).Append("\n");
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      sb.Append("  UpgradeLootName: ").Append(UpgradeLootName).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  ExpiryTime: ").Append(ExpiryTime).Append("\n");
      sb.Append("  Value: ").Append(Value).Append("\n");
      sb.Append("  Rarity: ").Append(Rarity).Append("\n");
      sb.Append("  Asset: ").Append(Asset).Append("\n");
      sb.Append("  StoreItemId: ").Append(StoreItemId).Append("\n");
      sb.Append("  DisplayCategories: ").Append(DisplayCategories).Append("\n");
      sb.Append("  RentalGames: ").Append(RentalGames).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}