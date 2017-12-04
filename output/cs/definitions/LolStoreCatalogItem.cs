using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct LolStoreCatalogItem {
    [DataMember(Name = "itemId")]
    int ItemId {get; set;}

    [DataMember(Name = "inactiveDate")]
    string InactiveDate {get; set;}

    [DataMember(Name = "itemInstanceId")]
    string ItemInstanceId {get; set;}

    [DataMember(Name = "tags")]
    string[] Tags {get; set;}

    [DataMember(Name = "itemRequirements")]
    LolStoreItemKey[] ItemRequirements {get; set;}

    [DataMember(Name = "sale")]
    LolStoreSale Sale {get; set;}

    [DataMember(Name = "releaseDate")]
    string ReleaseDate {get; set;}

    [DataMember(Name = "prices")]
    LolStoreItemCost[] Prices {get; set;}

    [DataMember(Name = "subInventoryType")]
    string SubInventoryType {get; set;}

    [DataMember(Name = "maxQuantity")]
    int MaxQuantity {get; set;}

    [DataMember(Name = "active")]
    bool Active {get; set;}

    [DataMember(Name = "inventoryType")]
    string InventoryType {get; set;}

    [DataMember(Name = "bundled")]
    LolStoreBundled Bundled {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class LolStoreCatalogItem {\n");
      sb.Append("  ItemId: ").Append(ItemId).Append("\n");
      sb.Append("  InactiveDate: ").Append(InactiveDate).Append("\n");
      sb.Append("  ItemInstanceId: ").Append(ItemInstanceId).Append("\n");
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      sb.Append("  ItemRequirements: ").Append(ItemRequirements).Append("\n");
      sb.Append("  Sale: ").Append(Sale).Append("\n");
      sb.Append("  ReleaseDate: ").Append(ReleaseDate).Append("\n");
      sb.Append("  Prices: ").Append(Prices).Append("\n");
      sb.Append("  SubInventoryType: ").Append(SubInventoryType).Append("\n");
      sb.Append("  MaxQuantity: ").Append(MaxQuantity).Append("\n");
      sb.Append("  Active: ").Append(Active).Append("\n");
      sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
      sb.Append("  Bundled: ").Append(Bundled).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}