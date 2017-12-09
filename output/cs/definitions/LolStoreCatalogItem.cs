using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolStoreCatalogItem
    {
        [DataMember(Name = "active")]
        public bool? Active { get; set; }

        [DataMember(Name = "bundled")]
        public LolStoreBundled? Bundled { get; set; }

        [DataMember(Name = "inactiveDate")]
        public string InactiveDate { get; set; }

        [DataMember(Name = "inventoryType")]
        public string InventoryType { get; set; }

        [DataMember(Name = "itemId")]
        public int ItemId { get; set; }

        [DataMember(Name = "itemInstanceId")]
        public string ItemInstanceId { get; set; }

        [DataMember(Name = "itemRequirements")]
        public LolStoreItemKey[] ItemRequirements { get; set; }

        [DataMember(Name = "maxQuantity")]
        public int? MaxQuantity { get; set; }

        [DataMember(Name = "prices")]
        public LolStoreItemCost[] Prices { get; set; }

        [DataMember(Name = "releaseDate")]
        public string ReleaseDate { get; set; }

        [DataMember(Name = "sale")]
        public LolStoreSale? Sale { get; set; }

        [DataMember(Name = "subInventoryType")]
        public string SubInventoryType { get; set; }

        [DataMember(Name = "tags")]
        public string[] Tags { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolStoreCatalogItem {\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  Bundled: ").Append(Bundled).Append("\n");
            sb.Append("  InactiveDate: ").Append(InactiveDate).Append("\n");
            sb.Append("  InventoryType: ").Append(InventoryType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  ItemInstanceId: ").Append(ItemInstanceId).Append("\n");
            sb.Append("  ItemRequirements: ").Append(ItemRequirements).Append("\n");
            sb.Append("  MaxQuantity: ").Append(MaxQuantity).Append("\n");
            sb.Append("  Prices: ").Append(Prices).Append("\n");
            sb.Append("  ReleaseDate: ").Append(ReleaseDate).Append("\n");
            sb.Append("  Sale: ").Append(Sale).Append("\n");
            sb.Append("  SubInventoryType: ").Append(SubInventoryType).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}